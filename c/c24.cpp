#include<stdio.h>
#include<string.h>
int main()
{
	char *number[11] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char a[100];
	int sum,len,n,i;
	
	scanf("%s",a);
	
	len=strlen(a);
	for (i = 0; i < len; i++)
	{
		sum += a[i];
	}
	n = sum - len * 48;
	
	
 	for(i=0;n>=10;i++)
	{ 
		int b[100];
        b[i] = n % 10;  
        n /= 10;  
    }  
    a[i++] = n;  
  
	while(i--)
	{  
    	if(i!=0)
		{  
    		printf("%s ",number[a[i]]);  
    	}
		else
		{  
    		printf("%s\n",number[a[i]]);  
    	}  
	}  
	return 0;
}
