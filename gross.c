#include<stdio.h>

int main()
{
	float bs,hra,da,gross;
	printf("plesese enter base salary: ");
	scanf("%f",&bs);
	hra=bs*0.8;
	da=bs*0.2;
	gross=bs+hra+da;
	
	printf("gross is: %f",gross);
}
