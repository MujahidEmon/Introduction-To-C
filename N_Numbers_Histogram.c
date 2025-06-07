#include <stdio.h>
int main()
{
    int num[50];
    char s;
    int i, j, size;
    scanf("%c", &s);
    scanf("%d", &size);

    for(i=0;i<size;i++){
        scanf("%d", &num[i]);
    }

    for(i=0;i<size;i++){
        for(j=0;j<num[i];j++){
            printf("%c",s);
        }
        printf("\n");
    }
    return 0;
}