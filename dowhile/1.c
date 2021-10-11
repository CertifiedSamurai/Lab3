#include "ft.h"

double summ(int n)
{
	int i;
	double sum;

	i = 0;
	sum = 0;
    do
	{
		sum += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		i++;
	} while (i < n);
	return (sum);
}
