#include "ft.h"

void print(int n, int k)
{
	int i;
	double z;

	i = 0;
	z = 0;
    do
	{
		z = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if ((i + 1) % k == 0)
		{
			i++;
			continue ;
		}
		printf("%.4lf ", z);
		i++;
	} while(i < n);
}