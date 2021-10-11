#include "ft.h"
#include <stdlib.h>
int main()
{
    int operator;
    int n = 0;
    int k = 0;
    double eps = 0;

    printf("\nВарианты для выбора\n");
    printf("1. Задание 1\n");
    printf("2. Задание 2\n");
    printf("3. Задание 3\n");
    printf("4. Задание 4\n");
    printf("5. Задание 5\n");
    printf("6. Выйти\n");
    printf("Введите номер нужного пункта: ");
    scanf("%d", &operator);
    switch (operator)
    {
            case 1:
            {
            printf("Введите n: ");
            scanf("%d", &n);
            printf("%.4lf\n", summ(n));
            break ;
            }
            case 2:
            {
            printf("Введите eps: ");
            scanf("%lf", &eps);
            printf("%.4lf\n", summ2(eps));
            break ;
            }
            case 3:
            {
            printf("Введите n: ");
            scanf("%d", &n);
            printf("Введите k: ");
            scanf("%d", &k);
            print(n, k);
            break ;
            }
            case 4:
            {
            printf("Введите eps: ");
            scanf("%lf", &eps);
            printf("%d\n", findFirstElement(eps));
            break ;
            }
            case 5:
            {
            printf("Введите eps: ");
            scanf("%lf", &eps);
            printf("%d\n", findFirstNegativeElement(eps));
            break ;
            }
            case 6:
            break ;
    }

}