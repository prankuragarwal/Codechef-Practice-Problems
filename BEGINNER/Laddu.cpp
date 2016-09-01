#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <math.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <vector>
#include <map>
#include <stack>
using namespace std;
//prankuragarwal
#define ll         long long
#define S(x)       scanf("%d", &x)
#define Sl(x)      scanf("%lld", &x)
#define Sd(x)      scanf("%lf", &x)
#define P(x)       printf("%d\n", x)
#define Pl(x)      printf("%lld\n", x)
#define Pd(x)      printf("%lf\n", x)
#define Pblank()   printf(" ")
#define mem(x,y)   memset(x,y,sizeof(x))
#define F(x,y,z,i) for (x = y; x < z; x = x + i)
#define mod 1000000007
 
int main()
{
    int t;
    S(t);
    while(t--)
    {
        int act, flag = 0;
        string ori;
        S(act);
        cin >> ori;
        if(ori == "INDIAN")
            flag = 1;
        else
            flag = 2;
        int i;
        int laddu = 0;
        for (i = 0; i < act; i++)
        {
            string x;
            int y;
            cin >> x;
            if(x == "CONTEST_WON")
            {
                S(y);
                if(y > 20)
                {
                    laddu += 300;
                }
                else
                {
                    laddu += (320 - y);
                }
            }
            else if(x == "TOP_CONTRIBUTOR")
            {
                laddu += 300;
            }
            else if (x == "BUG_FOUND")
            {
                S(y);
                laddu += y;
            }
            else if (x == "CONTEST_HOSTED")
            {
                laddu += 50;
            }
        }
        int ans;
        if (flag == 1)
        {
            ans = laddu / 200;
        }
        else if (flag == 2)
        {
            ans = laddu / 400;
        }
        P(ans);
    }
    return 0;
}
