#include <bits/stdc++.h>
using namespace std;
int x_solve(int x, char ch, int y, int z);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        char c, c2;
        cin >> x >> c >> y >> c2 >> z;
        int solve_ans = x_solve(x, c, y, z);
        if (solve_ans == 0)
        {
            cout << "Eou!" << endl;
        }
        else
        {
            string ch = "Erou!";
            if (solve_ans < 0)
            {
                int p = (abs(solve_ans)) + z - 1;
                for (int i = 0; i < 5; i++)
                {
                    if (ch[i] == 'r')
                    {
                        while (p--)
                        {
                            cout << "r";
                        }
                    }
                }
                printf("\n");
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    int x = solve_ans - 1;
                    printf("%c", ch[i]);
                    if (ch[i] == 'r')
                    {
                        while (x--)
                        {
                            printf("r");
                        }
                    }
                }
                printf("\n");
            }
        }
    }

    return 0;
}
int x_solve(int x, char ch, int y, int z)
{
    if (ch == '+')
    {
        int sol = x + y;
        return z - sol;
    }
    else if (ch == '-')
    {
        int so = x - y;
        return z - so;
    }
    else if (ch == '*')
    {
        int s = x * y;
        return z - s;
    }
    else if (ch == '/')
    {
        int s1 = x / y;
        return z - s1;
    }
}