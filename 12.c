#include<stdio.h>
int main()
{
	int i,n,r;
	for(i=5;i>=1;i--)
	{
		for(r=4;r>=i;r--)
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
