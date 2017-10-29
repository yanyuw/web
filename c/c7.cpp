#include<stdio.h>
int main()
{
	int n,m,i,j;
	while(~scanf("%d",&n))
	{
		m=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&j);
			if(j%2)
			m*=j;
		}
		printf("%d\n",m); 
	}
	return 0;
}
