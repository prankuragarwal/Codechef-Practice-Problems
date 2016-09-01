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
    ll int t;
    Sl(t);
    while (t--){
        ll int n, k, i;
        Sl(n); Sl(k);
        ll int a[n];
        ll int b[n];
        for (i = 0; i < n; i++){
            Sl(a[i]);
            b[i] = 0;
            a[i] = a[i] - 1;
        }
 
        for (i = 0; i < n; i++){
            if(b[a[i]] == -1){
 
            }else if(a[i] == i) {
                b[i] = -1;
            }
            else{
                b[a[i]]++;
            }
        }
 
        ll int count = 0;
        for (i = 0; i < n; i++){
            if(b[i] > 0 && b[i] >= k){
                count++;
            }
        }
        Pl(count);
    }
    return 0;
}
