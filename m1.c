#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter value of a and b\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum of a and b is: %d\n",sum);
	if(sum>1 && sum<20)
	{
		printf("Sum is between 1 and 20");
	}
	 else
	 {
	 	printf("Sum greater than 20");
	 }
	 return 0;
}
