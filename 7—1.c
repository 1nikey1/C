#include<stdio.h>
int main()
{
	int w,c,i,j;
	float a;
	scanf("%d %d",&w,&c);
	if(w<=1000)
	{		if(w/200==0)
			i=w/200;
		else
			i=w/200+1;
		if(c=1)
			a=4.5*i;
		else
			a=7*i;
}
	else
	{
		if(w/300==0)
			j=(w-1000)/300;
		else
			j=(w-1000)/300+1;
		if(c=1)
			a=4.5*5+6*j;
		if(c=0)
			a=7*5+8.5*j;
	}
	printf("%.2f",a);
	return 0;
}
			


	