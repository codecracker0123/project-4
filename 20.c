#include<stdio.h>
int main()
{
	int i,n,r;
	for(i=4;i>=1;i--)
	{
		for(r=1;r<=i;r++)
		{
			printf(" ");
		}
		for(n=4;n>i;n--)
		{
		if(n==4)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
		}
	
		for(n=i;n<=4;n++)
		{
		if(n==4)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
		}
		
		printf("\n");
	}
}
