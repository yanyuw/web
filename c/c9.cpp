#include<stdio.h>
int main(void)
{
	int year,month,day,tmp,result,i;
	int count[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
	{
    result=0;
	if(( year%400==0 )||( year%100!=0 && year%4==0 ))
	count[2]=29;
	else count[2]=28;
	
	for(i=0;i<month;i++)
		result+=count[i];
		result+=day;
	
	printf("%d\n",result);
	}
	return 0;
    
} 
