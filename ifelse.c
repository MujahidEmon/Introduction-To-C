#include <stdio.h>
int main()
{
    int value;
    scanf("%d", &value);

    if (value >= 5000)
    {
        printf("will enroll 1 course\n");

        if (value >= 10000)
        {
            printf("will enroll two courses\n");
        }

        else
        {
            printf("One course is enough\n");
        }
    }

    else
    {
        printf("unable to enroll courses");
    }
    return 0;
}