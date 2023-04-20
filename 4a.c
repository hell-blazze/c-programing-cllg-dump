#include<stdio.h>

int main()
{
	int n,i,j;
	float abs,curr;
	abs=0;
	printf("please enter value of N :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		curr=1;
		for (j=i;j>0;j--)
		{
			curr*=j;
		}
		abs+=1/curr;	
	}
	printf("%f",abs);           
}
