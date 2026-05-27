#include <stdio.h>
#include <stdlib.h>

void fact20(int n)
{
    long long f = 1;
    while (n > 1)
    {
        f = f * n;
        n--;
    }
    printf("Factorial = %lld", f);
}

void fact21(int n)
{
    int size = 1;
    int i, x, y = 0;
    int* f = malloc(size * sizeof(int));
    f[0] = 1;
    while (n > 1)
    {
        for (i = 0; i < size; i++)
        {
            x = n * f[i] + y;
            y = x / 10;
            if (x > 9)
                x %= 10;
            f[i] = x;
            if (i == size - 1 && y != 0)
            {
                while (y > 0)
                {
                    size++;
                    f = realloc(f, size * sizeof(int));
                    f[size - 1] = y % 10;
                    y /= 10;
                }
                break;
            }
        }
        n--;
    }
    printf("Factorial = ");
    for (i = size - 1; i >= 0; i--)
        printf("%d", f[i]);
    free(f);
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n <= 20)
        fact20(n);
    else
        fact21(n);
    return 0;
}