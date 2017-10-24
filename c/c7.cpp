#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n); 
	while(n>0)
	{
		m=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&j);
			if(j%2)
				m*=j;
		}
		printf("%d",m);printf("\n"); 
		scanf("%d",&n); 
	}
	return 0;
}
