#include<stdio.h>
int main()
{
    int n,i,a;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    for(i=0; i< n; i++){
        scanf("%d", &a);
        if (a%2==0){
            even++;
        }
        else 
        {
            odd++;
        }

        if(a < 0){
            neg++;
        }
        else if(a > 0){
            pos++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}