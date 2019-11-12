#include "myMath.h"


double Pow(double x, int y)
{
	double iterate=y;
	double isNeg=0;
	double sumPow = 1;
	if (y == 0)
	{
		return sumPow;
	}
	else
	{
		if(y<0)
		{
			iterate=y*(-1);
			isNeg=1;
		}
			
		for (int i = 1; i <= iterate; i++)
		{
			sumPow=sumPow * x;
		}

	}
	if(isNeg)
	{
		return (dobule)1/sumPow;
	}
	return sumPow;
}

double Exp(int x)
{
	double iterate=x;
	double isNeg=0;
	double expo = 2.7183;
	double sumExpo = 1;

	if (x == 0)
	{
		return sumExpo;
	}
	else
	{
		if(x<0)
		{
			iterate=x*(-1);
			isNeg=1;
		}
		for (int i = 1; i <= iterate; i++)
		{
			sumExpo=sumExpo * expo;
		}

	}
	if(isNeg)
	{
		return (double)1/sumExpo;
	}
	return sumExpo;
}
