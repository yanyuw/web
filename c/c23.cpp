#include<stdio.h>
int main()
{
	char number[1001];
	char c;
	int a[10] = {0};
	int i = 0,n;
	
	while(scanf("%c",&c) != '\n');
	{
		scanf("%c",&c);
		number[i] = c;
		i++;
	}
	
	for (int j = 0; j < i-1; j++)
	{
		int tmp = number[j] - '0';
		a[tmp]++;	
	}
	
	for (int j =0; j < 10; j++)
	{
		if(a[j]==0) 
			break;
		else printf("%d:%d\n",a[j]);
	}

	return 0;
} 
