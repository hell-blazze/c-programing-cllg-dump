#include<stdio.h>
#define PI 3.14925

int main()
{
	float r,a,cir;
	printf("please enter the radius:");
	scanf("%f",&r);
	a=(float)PI*r*r;
	cir=PI*r*2;
	printf("area: %f",a);
	printf("\ncircumference: %f",cir);
}

