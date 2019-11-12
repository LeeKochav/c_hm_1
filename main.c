#include "myMath.h"
#include <stdio.h>

int main(){
	double x;
	double fx1, fx2, fx3;
	printf("This program is about to calculate the following functions for the given input:\n");
	printf("1. f(x)=e^x+x^3-2\n");
	printf("2. f(x)=3x+2x^2\n");
	printf("3. f(x)=(4x^3)/5-2x\n");
	printf("Please insert a real number\n");
	scanf("%lf", &x);
	int xPow=(int)(x);
	fx1 = sub(add(Exp(xPow), Pow(x,3)),2);
	fx2 = add(mul(x,3),mul(Pow(x,2),2));
	fx3 =sub(div(mul(Pow(x,3),4),5),mul(x,2));
	printf("1.f(x)= %.4f\n",fx1);
	printf("2.f(x)= %.4f\n",fx2);
	printf("3.f(x)= %.4f\n",fx3);
	return 0;
}
