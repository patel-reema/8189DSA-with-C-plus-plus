#include<stdio.h>
#include<conio.h>

main()
{
	int i, j, s;

	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(s=5; s>i; s--)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(s=5; s>i; s--)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
	}



	getch();
}
