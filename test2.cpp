#include<stdio.h>
#include<string.h>

int main()
{
	char a[110],b[110],c[110];
	int lena,lenb,temp,max,count = 1;
	
	scanf("%s",a);
	scanf("%s",b);
	
	lena = strlen(a);
	lenb = strlen(b);
	max = lena;
	
	if(lenb < lena)
	{
		int i = lena -1;
		temp = lenb;
		while(temp--)
		{
			b[i] = b[i - (lena - lenb)];
			i--;
		}
		while(i-- > -1)
		{
			b[i+1] = '0';
		}
		
	}
	if(lenb > lena)
	{
		int i = lenb -1;
		temp = lena;
		while(temp--)
		{
			a[i] = a[i - (lenb -lena)];
			i--;
		}
		while(i-- > -1)
		{
			a[i+1] = '0';
		}
		max = lenb;
	}
	
	for (int i = max - 1;i >= 0; i--)
	{
		if(count % 2 == 1)
		{
			switch((a[i] - '0' + b[i] - '0') % 13)
			{
				case 10 : c[i] = 'J';									break;
				case 11 : c[i] = 'Q';									break;
				case 12 : c[i] = 'K';									break;
				default : c[i] = (a[i] - '0' + b[i] - '0') % 13 + '0';	break;
			}
			count++;
		}	
		else
		{
			c[i] = (b[i] - a[i] );
			if(c[i] < 0)
			{
				c[i] += 10;
			}
			c[i] += '0';
			count++;
		}
	}

	printf("%s",c);
	return 0;
}
