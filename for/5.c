#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;
	
	i = 0;
    z =  pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
    for (i = 0; ; i++)
	{
		z =  pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(z) > eps && z < 0)
        {
            return (i);
        }
	}
}