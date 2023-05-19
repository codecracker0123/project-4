#include<stdio.h>
int main()
{
	int i,r;
	for(i=1;i<=5;i++)
	{
		for(r=1;r<=i;r++)
		{
			if(r%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
