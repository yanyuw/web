#include<stdio.h>
#include<string.h>

int main()
{
	int count=0,i=0,j;
	char sale[1001],red[1001];
	int len1,len2;
	
	scanf("%s",sale);
	scanf("%s",red);
	len1 = strlen(sale);
	len2 = strlen(red); 
	
	for(i = 0; i < len2; i++)
	{
		for(j = 0; j < len1; j++)
		{
			if(sale[j] == red[i])
			{
				count++;
				sale[j] = EOF;
				break;
			}
			
		}
	}
	
	if(count == len2)
		printf("Yes %d",(len1 - count));
	else
		printf("No %d",(len2 - count));
		
	
	
	return 0;
}
