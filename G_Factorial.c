#include<stdio.h>
int main()
{
    int T, N;
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        long long f=1;
        scanf("%d", &N);
        for(int j=1; j<=N; j++){
            f = f*j;
        }
        printf("%lli\n", f);
    }
    return 0;
}