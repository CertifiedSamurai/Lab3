#include "ft.h"

double summ2(double eps)
{
	double sum;
	int i;
	double a;
	
	i = 0;
	a = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	sum = 0;
	while (fabs(a) > eps)
	{
		sum += a;
		a = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		i++;
	}
	return (sum);
}