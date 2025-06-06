#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        int num;
        scanf("%d", &num);
        do{
            printf("%d ", num%10);
            num = num/10;
        }
        while (num !=0);
        printf("\n");
    }
    return 0;
}