#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c>47 && c<58){
        printf("IS DIGIT");
    }
    else if (c>64 && c<91)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if (c>96 && c<123)
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    
    
    return 0;
}