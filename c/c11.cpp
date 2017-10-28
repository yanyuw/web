#include<stdio.h>
int main(void)
{
	int n,m,i,j,rich[100];
	scanf("%d%d",&n,&m);
	do{
		for(i=0;i<n;i++)
		scanf("%d",&rich[i]);
		
		for(i=0;i<n-1;i++)
		{  for(j=n-1;j>i;j--)
		  {if(rich[j-1]<rich[j])
		    {int temp=rich[j];
		    rich[j]=rich[j-1];
		    rich[j-1]=temp;
			}
		  } 
		}
		
		for(i=0;i<m;i++)
		{printf("%d ",rich[i]);} 
		
		printf("\n");
		scanf("%d%d",&n,&m);
	}while(n!=0&&m!=0);
	
	return 0;
 } 
