#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;

    i = 0;
    z = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
    do
	{
		z = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (z < 0)
        {
            return (i);
        }
        i++;
	} while (fabs(z) > eps);
    return (0);
}