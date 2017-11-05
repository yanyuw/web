#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int sum = 0;
    int i = 1;
    int j;
    int k = 0;

    while(i++){
        for (j = 2; j <= (int)sqrt(i); j++){
            if (i%j==0)
                break;
        }
        if (j > (int)sqrt(i))
		{
            sum++;    
            if (sum >= n && sum <= m)
			{
                if ((sum-n+1) % 10 == 1)
				{
                    printf("%d",i);
                }
                else
                    printf(" %d",i);
                if ((sum-n+1) % 10 == 0)
				{
                    printf("\n");
                }
            }
        }
        if (sum > m)
            break;
    }
}
