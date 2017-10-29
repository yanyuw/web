#include<stdio.h>
int main(void)
{
	int n,count;
	scanf("%d",&n);
	count=0;
	do{	if(n%2==0)
	{n/=2;count++;}
	else {n=((3*n+1)/2);count++;}
	}while(n!=1);
	printf("%d",count);
	return 0;
 } 
