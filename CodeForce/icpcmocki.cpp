#include<bits/stdc++.h>
using namespace std;

int max_e(int s,int ii,int x,int arr[]){
    int c=0;
    for(int i=ii+1;i<s;i++){
        if(arr[i]>x){
            c=1;
        } else {
            c=0;
            break;
        }
    }
    return c;
}

int min_e(int s,int ii,int x,int arr[]){
    int c=0;
    for(int i=ii-1;i>=0;i--){
        if(arr[i]<x){
            c=1;
        } else {
            c=0;
            break;
        }
    }
    return c;
}

int is_sort(int s,int arr[]){
    int x=0;
    for(int i=0;i<s-1;i++){
        if(arr[i]<arr[i+1]){
            x++;
        }
    }
    return x;
}

int main()
{
    int n; cin>>n;
    int test_case=1;
    while(n--)
    {
        int tc;
        cin>>tc;
        int arr[tc];
        for(int i=0;i<tc;i++){
            cin>>arr[i];
        }

        if(is_sort(tc,arr)==tc-1){
            cout<<"Case "<<test_case<<": "<<1<<endl;
        }
        else{
            int f=0;
            for(int i=0;i<tc;i++){
                int max_value=max_e(tc,i,arr[i],arr);
                int min_value=min_e(tc,i,arr[i],arr);

                if(max_value==min_value && max_value==1){
                    cout<<"Case "<<test_case<<": "<<i+1<<endl;
                    f=-1;
                    break;
                }
                else {
                    f++;
                }
            }

            if(f!=-1){
                cout<<"Case "<<test_case<<": Humanity is doomed!"<<endl;
            }
        }
        test_case++;
    }

    return 0;
}
