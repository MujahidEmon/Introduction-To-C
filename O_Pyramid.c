#include<stdio.h>
int main()
{
    int i, n;
    int s[99];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}