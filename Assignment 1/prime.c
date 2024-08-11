#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool isPrime = true;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not a prime");
    }

    return 0;
}