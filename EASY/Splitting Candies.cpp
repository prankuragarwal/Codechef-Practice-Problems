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


int main(){
    ll int t;
    Sl(t);
    while (t--){
        ll int n, k;
        Sl(n); Sl(k);
        ll int ans, a;
        if (k != 0){
        ans = n / k;
        a = ans * k;
        a = n - a;
        }
        else {
            ans = 0;
            a = n;
        }
        cout << ans << " " << a << endl;
    }
    return 0;
}
