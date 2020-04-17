#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number of 1-9=");
    scanf("%d",&a);

    if(a>5)     // &&= and ||= or
    {
        printf("Done");
    }
    else{
        printf("do");
    }
    getch();
}
