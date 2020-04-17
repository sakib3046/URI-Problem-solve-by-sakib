/*
#include<stdio.h>
main()
{
    int i;

    for(i=1; i<=10; i=i+1)
    {
        printf(" %d",i);
        printf(" End\n");
    }

    getch();
}
*/
#include<stdio.h>
main()
{
    int i,n;

    printf("Enter The Last Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        printf(" i= %d\n",i);
    }

    getch();
}

