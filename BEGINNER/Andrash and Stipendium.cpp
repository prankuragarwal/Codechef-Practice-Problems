#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <math.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <vector>
#include <set>
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
 
map<ll int, ll int> m;
 
int main()
{
    ll int t;
    Sl(t);
    while(t--){
        ll int n, i, x;
        ll int sum = 0;
        Sl(n);
        for (i = 0; i < n; i++){
            Sl(x);
            m[x]++;
            sum = sum + x;
        }
        double avg = (sum * 1.0) / (n * 1.0);
        if(m[2] == 0 && m[5] >= 1 && avg >= 4.0){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        m.clear();
    }
    return 0;
}
