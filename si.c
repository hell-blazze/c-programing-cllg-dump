#include<stdio.h>

int main()
{
	float prin,r,t,si;
	printf("plesese enter principal: ");
	scanf("%f",&prin);
	printf("plesese enter rate: ");
	scanf("%f",&r);	
	printf("plesese enter time: ");
	scanf("%f",&t);
	si=(prin*r*t)/100	;
	printf("si: %f",si);
}
