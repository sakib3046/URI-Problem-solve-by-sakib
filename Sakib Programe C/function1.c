#include<stdio.h>
int sum(int x,int y)
	{
		int sum=x+y;
		return sum;
	}
void hi()
{
	printf("hi\n");
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Main Start\n");
	hi();
	int result = sum(a,b);
	printf("%d",result);
}
