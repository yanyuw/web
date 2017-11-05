#include<stdio.h>  
double avestu[50],avesub[5];  
double score[50][5];
double sumstu,sumsub;  
int i,j;  

int main()  
{  
    int n,m;  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        for (i=0;i<n;i++)  
            for (j=0;j<m;j++)  
                scanf("%lf",&score[i][j]);  
        
        for(i=0;i<n;i++)  
        {  
            sumstu=sumsub=0;  
            for(j=0;j<m;j++)  
            {  
                sumstu+=score[i][j];
            }  
            avestu[i]=sumstu/m; 
        }  
        for(i=0;i<m;i++)  
        {  
            sumsub=0;  
            for(j=0;j<n;j++)  
                sumsub+=score[j][i];   
            avesub[i]=sumsub/n;  
        }  
        int sum=0,temp;
        for( i=0;i<n;i++)  
        {  
            temp=0;  
            for(j=0;j<m;j++)  
            {                 
                if(score[i][j]<avesub[j]) 
                {  
                    temp=1;  
                    break;  
                }  
            }  
            if(temp==0)  
                sum++;  
        }  
        for(i=0;i<n-1;i++)  
            printf("%.2lf ",avestu[i]);  
        printf("%.2lf\n",avestu[n-1]);  
        for(i=0;i<m-1;i++)  
            printf("%.2lf ",avesub[i]);  
        printf("%.2lf\n",avesub[m-1]);  
        printf("%d\n\n",sum);  
    }  
    return 0; 
}
