#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	i = 0;
	z =  pow(-1, i) * (1 - (2 * i - 1) / (2 * (i + 1)));
	for (i = 0; ; i++)
	{
		z =  pow(-1, i) * (1 - (2 * i - 1) / (2 * (i + 1)));
		if (fabs(z) < eps)
        {
            break ;
        }
	}
	return (i);
}