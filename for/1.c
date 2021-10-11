#include "ft.h"

double summ(int n)
{
	int i;
	double sum;

	sum = 0;
    for(i = 0; i <= n - 1; i++)
    {
        sum += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
    }
	return (sum);
}