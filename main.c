#include <stdio.h>

void biggest3();
void factorial();

int main()
{
    biggest3();
    factorial();

    return 0;
}

void biggest3()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Biggest = %d\n", a);
    else if (b >= a && b >= c)
        printf("Biggest = %d\n", b);
    else
        printf("Biggest = %d\n", c);
}

void factorial()
{
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d\n", fact);
}
