#include<stdio.h>
#include<math.h>

int arm_chk(int num)
{
	int i,con_num,count=0,n;
	con_num=0;
	n=num;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	if(count<3)
	{
		count = 0;
	}
	for (i=num;i>0;i=i/10)
	{
		con_num+= powf(i%10,count);
	}
	if (con_num == num)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int arm_range(int n1,int n2)
{
	int i;
	for(i=n1;i<=n2;i++)
	{
		if (arm_chk(i)==0)
		{
			printf("%d, ",i);
		}
	}
}
void main()
{
	int n1,n2;
	printf(" enter lower and upper range : ");
	scanf("%d %d",&n1,&n2);
	arm_range(n1,n2);
}
