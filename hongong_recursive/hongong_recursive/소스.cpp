#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void printHello(int n)
//{
//	if (n > 0)
//	{
//		printf("Hello\n");
//		printHello(n - 1);
//	}
//	else
//		return;
//}
//
//int main(void)
//{
//	printHello(4);
//
//}

//void count(int n)
//{
//	printf("%d 남았습니다!\n", n);
//	if (n > 1)
//	{
//		count(n - 1);
//	}
//	else
//		return;
//}
//
//int main()
//{
//	int n = 0;
//	printf("Enter the number");
//	scanf("%d", &n);
//	count(n);
//	printf("-끝-");
//}

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);
}