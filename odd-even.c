#include<stdio.h>

int main()
{
	int nu;
	printf("please enter number: ");
	scanf("%d",&nu);
	if (nu%2==0)
	{
		printf("%d is even",nu);
	}
	else
	{
		printf("%d is odd",nu);
	}
}

