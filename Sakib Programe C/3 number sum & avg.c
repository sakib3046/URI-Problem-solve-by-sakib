/*
#include<stdio.h>
main()
{
    int a,b,c,sum;
    float avg;
        printf("Enter a:");
        scanf("%d",&a);

        printf("Enter b:");
        scanf("%d",&b);

        printf("Enter c:");
        scanf("%d",&c);

            sum=a+b+c;
            avg=(float)sum/3;

        printf("Summation of 3 number is: %d\n",sum);
        printf("Avg of 3 number is: %.4f",avg);
        getch();
    return 0;
}
*/
#include<stdio.h>
main()
{
    int a,b,c,sum;
    float avg;
        printf("Enter the 3 numbers:");
        scanf("%d %d %d",&a,&b,&c);

            sum=a+b+c;
            avg=(float)sum/3;

        printf("Summation And AVG of 3 number is: %d & S%.4f\n",sum,avg);
        getch();
    return 0;
}
