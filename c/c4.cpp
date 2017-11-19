#include<stdio.h>
int gcd(int m,int n)
{
	int r,tmp1,tmp2;
	r=m%n;
	while(r>0){
		r=m%n;
		tmp1=n;m=tmp1;
		tmp2=r;n=tmp2;
	}
	return m;
}
int main(void)
{
	int a,b;
	puts("请输入两个正整数");
	printf("正整数1："); scanf("%d",&a);
	printf("正整数2："); scanf("%d",&b);
	if(a>0&&b>0)
	printf("他们的最大公因数是%d。\n",gcd(a,b)); 
	else puts("请输入正整数");
	return 0;
}
