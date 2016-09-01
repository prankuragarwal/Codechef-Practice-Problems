#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long long t,n,i,q,g,head,tail;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&g);
		while(g--)
		{
			scanf("%lld %lld %lld",&i,&n,&q);
      tail=(n+1)/2;
      head=n-tail;
			if((q==1 && i==1)||(q==2 && i==2))
			  printf("%lld\n",head);
			else if((q==2 && i==1)|| (q==1 && i==2))
			  printf("%lld\n",tail);
		}
	}
	return 0;
}  
