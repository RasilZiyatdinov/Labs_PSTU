#include <cmath>
#include "Solution.h"
double x1, x2, D, first, second;
int solution(double A, double B, double C)
{
	if (A == 0 && B == 0 && C == 0)
	{
		return 0;
	}
	else if (A == 0 && B == 0 && C != 0)
	{
		return -1;
	}
	if (A == 0 && B != 0)
	{
		x1 = (-1*C) / B;
		return 1;
	}
	D = B * B - 4 * A * C;
	if (D > 0)
	{
		x1 = (-B + sqrt(D)) / (2 * A);
		x2 = (-B - sqrt(D)) / (2 * A);
		return 2;
	}
	else if (D == 0)
	{
		x1 = (-1*B) / (2 * A);
		return 1;
	}
	else
	{
		D = -1 * D;
		first = (-1*B) / (2 * A);
		second = (sqrt(D)) / (2 * A);
		return -2;
	}
}
