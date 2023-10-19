#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

////문자를 숫자로 바꾸는 함수
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

//숫자를 문자로 바꾸는 함수 sprintf
int main() {
	int number = 12345;
	char str[20];

	sprintf(str, "%d", number);

	printf("Converted string: %s\n", str);
	return 0;
}
