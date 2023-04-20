#include<stdio.h>

int main()
{
	int n,i,j,k,l;
	char ch='A';
	printf("please enter value of N :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			printf("%d",k);	
		}	
		for (l=1;l<i;l++)
		{
			printf("%c",ch+l-1);
		}
		printf("\n");
	}           
}
