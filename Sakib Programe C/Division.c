#include<stdio.h>
main()
{
    float x,y,divides;

    printf("\n\tEnter X:");
    scanf("%f",&x);

    printf("\n\tEnter Y:");
    scanf("%f",&y);

    divides=x/y;
    printf("\n\t\aX/Y=%.2f",divides);
getch();
}
