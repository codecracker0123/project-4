#include<stdio.h>
int main()
{
	int i,n,j=1;
	for(i=1;i<=5;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		
	}
	
}
