#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int j = 0, run = 0;
        int k = 0, ro = 0, o = 0;
        char a[60];
  fflush(stdin);
        fgets(a,61,stdin);
        int len=strlen(a)-1;

        for (int i = 0; i < len; i++) {


            if (a[i] == 'W') {
                j++;
            } else if (a[i] >= '0' && a[i] <= '9') {
                run += a[i] - '0';
            }

            k++;
        }

        ro = k % 6;
        o = k / 6;
  if(len>6 && run>1 && j>1){
        printf("%d.%d Overs %d Runs %d Wickets.\n", o, ro, run, j);

    }

   else if(len>6 && run>1 && j<=1){
        printf("%d.%d Overs %d Runs %d Wicket.\n", o, ro, run, j);

    }
     else if(len>6 && run<=1 && j>1){
        printf("%d.%d Overs %d Run %d Wickets.\n", o, ro, run, j);

    }
     else if(len<=6 && run>1 && j>1){
        printf("%d.%d Over %d Runs %d Wickets.\n", o, ro, run, j);

    }
     else if(len>6 && run>1 && j>1){
        printf("%d.%d Overs %d Runs %d Wickets.\n", o, ro, run, j);

    }
     else if(len>6 && run<=1 && j<=1){
        printf("%d.%d Overs %d Run %d Wicket.\n", o, ro, run, j);

    }
     else if(len<=6 && run>1 && j<=1){
        printf("%d.%d Over %d Runs %d Wicket.\n", o, ro, run, j);

    }
     else if(len<=6 && run<=1 && j>1){
        printf("%d.%d Over %d Run %d Wickets.\n", o, ro, run, j);

    }

     else 
        printf("%d.%d Over %d Run %d Wicket.\n", o, ro, run, j);



    }

    return 0;
}

