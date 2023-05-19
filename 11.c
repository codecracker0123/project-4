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
}
