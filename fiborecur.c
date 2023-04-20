#include<stdio.h>

int fibo(int i)
{
	if (i==0)
	{
		return 0;
	}
	else if (i==1)
	{
		return 1;
	}
	else
	{
		return fibo(i-1)+fibo(i-2);
	}
}
void main()
{
	int i,n;
	printf("enter till what range to print fibo");
	scanf("%d",&i);
	for(n=1;n<i;n++)
	{
		printf("%d, ",fibo(n));
	}
}
