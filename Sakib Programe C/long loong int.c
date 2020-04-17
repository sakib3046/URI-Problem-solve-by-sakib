/*#include<stdio.h>
main()
{
    int a= 2147483647;                  //int. maximum value is=2147483647
    //scanf("%d",&a);
    //printf("Ans=%d",&a);
    printf("%d",a);
    getch();
}
*/

// Solve of the problem is long long int

#include<stdio.h>
main()
{
    long long int a;
    printf("Enter Unlimited Integer Number: ");
    scanf("%lld",&a);

    printf("\n You Entered = %lld",a);
    getch();
}
