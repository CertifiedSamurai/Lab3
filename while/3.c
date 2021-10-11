#include "ft.h"

void print(int n, int k)
{
	int i;
	double z;

	i = 0;
	z = 0;
	while(i <= n - 1)
	{
		z = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (i % k == 0)
		{
			i++;
			continue;
		}
		printf("%.4lf ", z);
		i++;
	}
}