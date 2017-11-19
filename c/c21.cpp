#include<stdio.h>
int main()
{
	int a[1001],n;
	
	a[1]=0;
	a[2]=2;
	a[3]=2;
	
	for(int i = 4; i <= 1000; i++)
	{
		a[i] = (a[i-1] + 2 * a[i-2])%10000;
	}
	while(scanf("%d",&n),n)
	{	
		printf("%d\n",a[n]);
	}
	return 0;
}
