#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
//#include <assert.h>

#define zaz double

double Luneyka(double b, double c);
int MOHC(double number1, double number2);

int main () 
{
	double a = 0, b = 0, c = 0;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0) 
	{
		double x = Luneyka(b, c);
		if (!isnan(x))
		{
			printf("RESHENIE EST'! ETOOOO.... %lf\r\n", x);
		}
	}
	else
	{
		double d = (b * b) - (4 * a * c);
		if (MOHC(d, 0))
		{
			double x = (-b) / (2 * a);
			printf("RESHENIE EST'! ETOOOO.... %lf\r\n", x);
		}
		else if (d < 0)
		{
			printf("OTRICATELNIY D POLUCHAETSYA!\r\n");
		}
		else 
		{
			double x1 = (-b + sqrt(d)) / (2 * a);
			double x2 = (-b - sqrt(d)) / (2 * a);
			printf("RESHENIE EST'! ETOOOO.... %lf, %lf\r\n", x1, x2);
		}
	}

	return 0;
}

zaz Luneyka (double b, double c)
{
	double x = NAN;

	if (b == 0)
	{
		if (c != 0)
		{
			printf("wertyu\r\n");
		}
		else
		{
			printf("fguiuoi\r\n");
		}
	}
	else
	{
		x = -c / b;
	}

	return x;
}

int MOHC (double number1, double number2)
{
	double tochnost = 0.000001;

	if (abs(number1 - number2) <= tochnost)
		return 1;
	else
		return 0;
}
