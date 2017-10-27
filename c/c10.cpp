#include<stdio.h> 
int main(void)

{
	int n,m,i,j,test[50][5],count,tmp;
	double ave1[50],ave2[5],sum;
	
	scanf("%d%d",&n,&m);
	while(n>0&& n<=50 && m<=5 && m>0)
	{
		count=0;
		for(i=0;i<n;i++)
		  for(j=0;j<m;j++)
		    scanf("%d",&test[i][j]);
		  
		
		for(i=0;i<n;i++)
		{  sum=0;
		for(j=0;j<m;j++)
		   sum+=test[i][j];
		   ave1[i]=sum/m;
		}
		    
		    
		for(j=0;j<m;j++)  
		{  sum=0;
		for(i=0;i<n;i++)
		      sum+=test[i][j];
		      ave2[j]=sum/n;
		} 
		
		for(i=0;i<n;i++)
            {tmp=1; 
            for(j=0;j<m;j++) 
                if(test[i][j]<ave1[j])
                { tmp=0; break; } 
            if(tmp)
                count++;
			} 
		
		for(i=0;i<n;i++)
		  printf("%.2lf ",ave1[i]);
		  printf("\n");
	    for(j=0;j<m;j++)
		  printf("%.2lf ",ave2[j]);
		  printf("\n");
		printf("%d\n",count);
			  
	scanf("%d%d",&n,&m);
	}
	return 0;
}
