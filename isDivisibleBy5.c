#include<stdio.h>
#include<string.h>
int main(){
    int i, n;
    char isDivisible[5];
    scanf("%d", &n);
    for(i=1; i<=n ; i++){
        if(i%5==0){
            strcpy(isDivisible, "Yes");
        }
        else strcpy(isDivisible, "No");
        printf("%d %s\n", i, isDivisible);
    }
    return 0;
}