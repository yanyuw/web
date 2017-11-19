#include<stdio.h>
int main(void)
{
    int a[100],i;
    double ave,n,max,min,sum;
    while(~scanf("%d",&n)&&n>2&&n<=100){
    scanf("%d",&a[0]);
    max=min=sum=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
          max=a[i];
        if(min>a[i])
          min=a[i];
           
          sum+=a[i];
    }
    ave=(double)(sum-(max+min))/(double)(n-2);
    printf("%.2lf\n",ave);
    }
    return 0;
}
