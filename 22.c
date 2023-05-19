#include<stdio.h>
int main()
{
	char i,r;
	for(i='A';i<='E';i++)
	{
		for(r='A';r<=i;r++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
