#include<stdio.h>
int main(void)
{
	int a[100],max,min,sum,i,n,m; 
	double ave;
	scanf("%d",&n);
	while(n>0&&n<=100){
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
		max=min=a[0];
		if(max<a[i])
		  max=a[i];
		if(min>a[i])
		  min=a[i];
		  
		  sum+=a[i];
	}
	m=sum-(max+min);
	ave=(double)m/(double)(n-2);
	printf("%.2f\n",ave);
	
	scanf("%d",&n);
    }
}
