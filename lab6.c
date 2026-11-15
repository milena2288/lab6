#include <stdio.h>

int task1();
int task2();

int main()
{
    task1();
    task2();
    return 0;
}

int task1()
{
    int year;
    printf("Год:");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("год %d високосный\n", year);
    }
    else
    {
        printf("год %d не високосный\n", year);
    }
    return 0;
}
// вариант 3
// контрольный пример:
// x=-5:F=9
// x=-3:F=9
// x=0:F=1/(0+1)=1
// x=2:F=1/(4+1)=0.2
int task2()
{
    double x;
    printf("x=");
    scanf("%lf", &x);
    printf("F(%.2f)=%.2f\n", x, x <= -3 ? 9.0 : 1.0 / (x * x + 1));
    return 0;
}