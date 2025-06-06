#include <stdio.h>
int main()
{
    int n, isPrime = 1;
    scanf("%d", &n);
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
            else
            {
                isPrime = 1;
            }
        }
    }
    isPrime == 1 ? printf("YES") : printf("NO");

    return 0;
}