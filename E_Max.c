#include<stdio.h>
int main()
{
    int n,a;
    int cmp = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        if(a>=cmp){
            cmp = a;
        }
    }
    printf("%d", cmp);
    return 0;
}