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
//map<char, ll int>m;
ll int a[100005];
ll int s[100005];
/*ll int divisors(ll int n)
{
    ll int sum = 0;
    for (ll int i = 1; i <= sqrt(n); i+= 1)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                sum = sum + i;
            else {
                sum = sum + i;
                if ((n / i) % 2 == 1)
                    sum = sum + (n/i);
            }
        }
    }
    return sum;
}
*/
ll int divisors(ll int n)
{
    ll int sum = 0;
    for (ll int i = 1; i <= sqrt(n); i+= 1)
    {
        if (i % 2 == 1) {
            if (n % i == 0) {
                sum = sum + i;
            }
        }
        if (i != (n/i)) {
            if ((n/i) % 2 == 1 && n % (n/i) == 0) {
                sum = sum + (n/i);
            }
        }
    }
    return sum;
}
 
int main()
{
    ll int i;
    s[1] = 1;
    s[0] = 0;
    for(i = 2; i < 100001; i++)
    {
        ll int a = divisors(i);
        s[i] = s[i - 1] + a;
    }
    //for(i = 1; i < 11; i++)
    //    Pl(s[i]);
    ll int t;
    Sl(t);
    while(t--){
        ll int l, r;
        Sl(l); Sl(r);
        ll int ans;
 
        ans = s[r] - s[l - 1];
        Pl(ans);
    }
 
    return 0;
}
