#include<stdio.h>
int main()
{
	int i,r;
	for(i=1;i<=5;i++)
	{
		for(r=i;r>=1;r--)
		{
			printf("%d",r);
		}
		
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(r=i;r>=1;r--)
		{
			printf("%d",r);
		}
		printf("\n");
	}
	
}
