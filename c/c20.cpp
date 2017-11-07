#include<stdio.h>
double Polynomial(int x);

int main()
{
	int m,n;
	
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&n);	
		printf("%.2f\n",Polynomial(n));
	}
	
	return 0;
} 

double Polynomial(int x)
{
	double sum=0;
		for (int i = 1; i <= x; i++)
		{
			if(i % 2 == 1)
				sum += (double)(1.0 / i);
			else
				sum -= (double)(1.0 / i);
		}
	return sum;
}
