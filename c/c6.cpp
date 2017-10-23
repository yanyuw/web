#include <stdio.h>
int abs(int x)
{
	return x>0 ? x : -x;
}
int main(void)
{
	int i,j,n,tmp,a[100];
	scanf("%d",&n);
	do{
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n-1; i>=1;--i){
	for(j=0;j<i;++j)
	if(abs(a[j])>abs(a[j+1]))
		{tmp=a[j];a[j]=a[j+1];a[j+1]=tmp;}
		}
	for(i=0;i<n;++i)
	{printf("%d",a[i]);printf(" ");}
	printf("\n");
	scanf("%d",&n);	
	}while(n);
	
	return 0;
 } 
 
