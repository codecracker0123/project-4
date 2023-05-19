#include<stdio.h>
int main()
{
	int i,n,r;
	for(i=5;i>=1;i--)
	{
		for(r=1;r<=i;r++)
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
