#include<stdio.h>
#include<math.h> 
int main()
{
	int N,i;
	int a[10000],b[10000];
	double r,max=0;
	
	scanf("%d",&N);
	for (i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for (i = 0; i < N; i++)
	{
		r = sqrt((a[i]*a[i])+(b[i]*b[i]));
		if(r>=max)
			max=r;
	}
	printf("%.2f",max);
	
	return 0;
}
//Í¨¹ý 
