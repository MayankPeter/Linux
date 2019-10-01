#include"header.h"
void main()
{
	if(fork())
	{
		printf("P\n");
	}
	else
	{
		if(fork())
		{
			printf("c1\n");
		}
		else
		{
			if(fork())
			{
				printf("c2\n");
			}
			else
			{
				printf("c3\n");
			}
		}
	}

while(1);
}
