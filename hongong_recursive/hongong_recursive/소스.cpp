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
//	printf("%d ���ҽ��ϴ�!\n", n);
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
//	printf("-��-");
//}

//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//int main(void)
//{
//	struct score yuni = { 90, 80, 70 };
//	struct score* ps = &yuni;
//
//	printf("���� : %d\n", (*ps).kor);
//	printf("���� : %d\n", ps->eng);
//	printf("���� : %d\n", ps->math);
//}

//struct address
//{
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//int main(void)
//{
//	struct address list[5] = {
//		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
//		{"�̼���", 35, "222-2222", "���� ��õ��"},
//		{"�庸��", 19, "333-3333", "�ϵ� û����"},
//		{"������", 15, "444-4444", "�泲 õ��"},
//		{"���߱�", 45, "555-5555", "Ȳ�ص� ����"}
//	};
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%10s%5d%15s%20s\n",
//			list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//
//	return 0;
//}

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"�̼���", 35, "222-2222", "���� ��õ��"},
		{"�庸��", 19, "333-3333", "�ϵ� û����"},
		{"������", 15, "444-4444", "�泲 õ��"},
		{"���߱�", 45, "555-5555", "Ȳ�ص� ����"}
	};
	int i;

	print_list(list);

	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}