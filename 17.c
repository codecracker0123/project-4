#include<stdio.h>
int main()
{
	int i,n,r;
	for(i=1;i<=5;i++)
	{
		for(r=i;r<=4;r++)
		{
			printf(" ");
		}
		for(n=1;n<=i;n++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(r=2;r<=i;r++)
		{
			printf(" ");
		}
		for(n=i;n<=5;n++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
}
