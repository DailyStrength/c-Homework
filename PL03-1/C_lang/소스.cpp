#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

int main(void){
	char ch = NULL;

	while (ch != '.')
	{
		printf("Input a character : ");
		scanf(" %c", &ch);

		if (ch >= 'A' && ch <= 'Z')
		{
			if (ch == 'A' || ch == 'U' || ch == 'I' || ch == 'O' || ch == 'Y')
				printf("=> alphabet upper-case, vowel\n");
			else
				printf("=> alphabet upper-case, consonat\n");
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			if (ch == 'a' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'y')
				printf("=> alphabet lower-case, vowel\n");
			else
				printf("=> alphabet lower-case, consonat\n");
		}
		else if (ch >= '0' && ch <= '9')
			printf("=> decimal number\n", ch);
		else
			printf("=> symbol (not decimal number, not alphabet)\n", ch);

	}
}