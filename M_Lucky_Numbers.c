#include<stdio.h>
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);

    for(i=a;i<=b;i++){
        printf("%d ", i);
    }
    return 0;
}