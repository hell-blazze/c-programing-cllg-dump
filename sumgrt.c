#include<stdio.h>

int main()
{
	int n1,n2,sum;
	printf("plesese enter the numbers: ");
	scanf("%d %d",&n1,&n2);
	sum=n1+n2;
	if (sum>20)
	{
		printf("sum of these number %d is greater than 20",sum);
	}
	else
	{
		printf("sum of these number %d is between 1 and 20",sum);
	}
}  
