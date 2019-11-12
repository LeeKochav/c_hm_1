#include "myMath.h"


double Pow(double x, int y)
{
	double sumPow = 1;
	if (y == 0)
	{
		return sumPow;
	}
	else
	{
		for (int i = 1; i <= y; i++)
		{
			sumPow=sumPow * x;
		}

	}
	return sumPow;
}

double Exp(int x)
{
	double expo = 2.7183;
	double sumExpo = 1;

		if (x == 0)
	{
		return sumExpo;
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			sumExpo=sumExpo * expo;
		}

	}
	return sumExpo;
}
