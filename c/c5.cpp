#include<stdio.h>
int isprime(int x)
{
	for(int i=2;i*i<=x;i++) 
	if(x%i==0) return 0;
	return 1;
}
int main(void)
{
	int count=0;
	for(int i=2;i<=100;i++)
		if(isprime(i)) {
		printf("%d ",i),count++;
		if(count%5==0) printf("\n");}
	
	return 0;
}
