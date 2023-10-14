#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//
//struct student
//{
//	int num;
//	double grade;
//};
//
//int main(void)
//{
//	struct student s1;
//
//	s1.num = 2;
//	s1.grade = 2.7;
//	printf("학번 : %d\n", s1.num);
//	printf("학점 : %.1lf\n", s1.grade);
//
//	return 0;
//}

//

//

//struct student
//{
//	int id;
//	char name[20];
//	double grade;
//};
//
//int main(void)
//{
//	struct student s1 = { 315, "홍길동", 2.4 },
//		s2 = { 316, "이순신", 3.7 }, s3 = { 317, "세종대왕", 4.4 };
//
//	struct student max;
//
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade)max = s3;
//
//	printf("학번 : %d\n", max.id);
//	printf("이름 : %s\n", max.name);
//	printf("학점 : %.1lf\n", max.grade);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct vision
//{
//	double left;
//	double right;
//};
//
//struct vision exchange(struct vision robot);
//
//int main(void)
//{
//	struct vision robot;
//
//	printf("시력 입력 : ");
//	scanf("%lf%lf", &(robot.left), &(robot.right));
//	robot = exchange(robot);
//	printf("바뀐 시력 : %.lf %.lf\n", robot.left, robot.right);
//
//	return 0;
//}
//
//struct vision exchange(struct vision robot)
//{
//	double temp;
//
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//	return robot;
//}

//struct cracker {
//	int price;
//	int calories;
//};
//
//int main()
//{
//	struct cracker basasak;
//	printf("바사삭의 가격과 열량을 입력하세요 : ");
//	scanf("%d%d", &basasak.price, &basasak.calories);
//	printf("바사삭의 가격 : %d원\n", basasak.price);
//	printf("바사삭의 열량 : %dkcal\n", basasak.calories);
//	return 0;
//}




