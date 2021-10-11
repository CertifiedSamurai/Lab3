#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	i = 0;
	z = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	while (fabs(z) > eps)
	{
		z = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(z) < eps)
        {
            break;
        }
        i++;
	}
	return (i);
}