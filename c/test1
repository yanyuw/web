#include<stdio.h>
#include<string.h>
int main()
{
	char pw[20],userpw[50];
	char tmp = '0';
	int n,i,len1,len2,max,count = 0;
	
	scanf("%s%d",pw,&n);
	while(tmp != '#')
	{
		scanf("%s",userpw);
		
		len1 = strlen(pw);
		len2 = strlen(userpw);
		
		if(len1 > len2)
			max = len1;
		else
			max = len2;
		
		for (i = 0; i < max; i++)
		{
			if(pw[i] != userpw[i])
				break;
		}
		
		if(i == max)
		{
			printf("Welcome in"); 
			return 0;
		}
		else
		{
			printf("Wrong password: %s\n",userpw);
			count++;
		}
		
		if(count >= n)
		{
			tmp = '#';
			printf("Account locked\n");
		} 
			
	}
	return 0;
}
