#include<stdio.h>

int main()
{
	int n1,n2;
	printf("plesese enter the numbers: ");
	scanf("%d %d",&n1,&n2);
	//using formula
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("num1=%d , num2=%d",n1,n2);
}  
