#include<stdio.h>
#include<string.h> 
#define max(a,b) (a > b ? a : b)

int m,n,x,y;
int i,j,T,sum=0;
int a[1001][1001];

int main()
{
	scanf("%d",&T);

	while (T--)
	{
		scanf("%d%d%d%d",&m,&n,&x,&y);
		memset(a,0,sizeof(a)); 
		for (i = 1; i <= m; i++)
		{
			for(j = 1; j <= n; j++)
			{
				scanf("%d",&a[i][j]);
				a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1] ;
			}
		}
		
		for (i = x; i <= m; i++)
			for(int j = y; j <= n; j++)
				sum = max(sum,a[i][j] - a[i-x][j] - a[i][j-y] + a[i-x][j-y]);
		
		printf("%d\n",sum);
	}
	
	return 0;
} 
