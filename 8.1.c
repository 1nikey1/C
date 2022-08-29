#include <stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(a=1,i=0;a<=n;a++)
	{
		if(a%3==2&&a%5==3&&a%7==2)
		{
			printf("%5d",a);
			i++;
			if(i%5==0)
				printf("\n");
	}}
	return 0;}
