#include<stdio.h>
int main(void)
{
	long a,b,c;
	int result,T,i;
	
	scanf ("%d",&T);
	for (i = 0; i < T; i++){
		scanf("%ld%ld%ld",&a,&b,&c);
		if (a + b > c)
			printf ("Case #%d: true\n",i+1);
		else printf ("Case #%d: false\n",i+1);
	} 	
	
	return 0;
}


