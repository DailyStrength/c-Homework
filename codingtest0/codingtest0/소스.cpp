#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

////���ڸ� ���ڷ� �ٲٴ� �Լ�
//int main()
//{
//	int i = atoi("1234");
//	printf(" atoi(\"1234\") = %d\n", i);
//
//	double d = atof("1.234");
//	printf("\n atof(\"1.234\") = %lf\n", d);
//
//	return 0;
//}

//���ڸ� ���ڷ� �ٲٴ� �Լ� sprintf
int main() {
	int number = 12345;
	char str[20];

	sprintf(str, "%d", number);

	printf("Converted string: %s\n", str);
	return 0;
}
