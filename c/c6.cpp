#include <stdio.h>
#include <stdlib.h> 

int main() 
{	int n,a[100];
	int i,j;
	
	while((scanf("%d",&n)!=EOF) && (n<=100))
	{
	   if(n==0)   
	   return 0;
	   
	   for(i=0;i<n;i++)
	   {scanf("%d",&a[i]);}
		for(i=n-1;i>=0;i--)   
  		{    for(j=0;j<i;j++) 
		    {	if(abs(a[j]) < abs(a[j+1])) 
			    {a[j]+=a[j+1];   
				 a[j+1]=a[j]-a[j+1];  
				 a[j]-=a[j+1];}
			}  
		}  
		
        for(i=0; i<n; i++)
        {
            if(i==0)
                printf("%d",a[i]);
            else
                printf(" %d",a[i]);
        }
        printf("\n");
	} 
	
	return 0;
}
