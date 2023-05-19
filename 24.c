#include<stdio.h>
int main()
{
	int i,r,n;
	for(i=5;i>=1;i--)
	{
		for(n=1;n<=i;n++)
		{
			printf(" ");
		}
		for(r=5;r>i;r--)
		{
			printf("%d",r);
		}
		for(r=i;r<=5;r++)
		{
			printf("%d",r);
		}
		printf("\n");
	}
}
