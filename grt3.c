#include<stdio.h>

int main()
{
	int n1,n2,n3;
	printf("plesese enter the numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if (n1>n2 )
	{
		if(n1>n3)
		{
			printf("%d is grater",n1);
		}
			else
		{
				printf("%d is grater",n3);
		}
	}
	else if(n2>n3)
	{
		printf("%d is grater",n2);	
	}

}  
