#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf(">>> 12 x 12 Multiplicatino Table <<<");
	printf("\n\n     |");
	for (int i = 0; i < 12; i++)
	{
		printf("%5d", i+1);
	}

	printf("\n");

	for (int i = 0; i < 66; i++)
	{
		printf("-");
	}

	printf("\n");

	for (int i = 0; i < 12; i++)
	{
		if(i < 9)
			printf("   %d |", i+1);
		else
			printf("  %d |", i + 1);
		for (int j = 0; j < 12; j++)
		{
			printf("%5d", (j + 1) * (i + 1));
		}
		printf("\n");
	}
}