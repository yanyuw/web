#include<stdio.h>
int main(void)
{
	int year,month,day,tmp,result,i;
	int count[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d/%d/%d",&year,&month,&day);
	while(year>0 && month>0 && day>0)
	{
    result=0;
	if(( year%400==0 )||( year%100!=0 && year%4==0 ))
	tmp=1;
	else tmp=0;
	count[2]+=tmp;
	
	for(i=1;i<=12;i++)
	if(month>i) result+=count[i];
	result+=day;
	
	printf("%d\n",result);
	scanf("%d/%d/%d",&year,&month,&day);
	}
	return 0;
    
} 
