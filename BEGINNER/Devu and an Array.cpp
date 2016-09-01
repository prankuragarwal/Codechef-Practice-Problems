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
 
map<ll int, ll int> m;
map<ll int, ll int>::iterator mi;
 
int main() {
	ll int n, q;
	Sl(n); Sl(q);
	ll int max = 0;
	ll int min = 1000000001;
	ll int a[n];
	for (ll int i = 0; i < n; i++)
    {
        Sl(a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    ll int temp;
    for (ll int i = 0; i < q; i++)
    {
        Sl(temp);
        if (temp >= min && temp <= max)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
	return 0;
}
