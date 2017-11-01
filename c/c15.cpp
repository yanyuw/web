#include<stdio.h>
int main(void)
{
   int T,a[1000],i;
   scanf("%d",&T);
    for(i=0;i<T;i++)
        scanf("%d",&a[i]);
    for(i=0;i<T;i++)
        printf("%c",a[i]);
   return 0;   
}
