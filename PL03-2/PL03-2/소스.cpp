#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define TEN 10

int main()
{
	int ten[TEN] = { 0 };
	printf("Input 10 integer data : ");

	//10개의 정수 입력받기
	for (int i = 0; i < TEN; i++)
	{
		scanf("%d", &ten[i]);
	}

	//10개의 정수 출력하기
	for (int i = 0; i < TEN; i++)
	{
		printf("%d ", ten[i]);
	}

	//최소값 계산
	int min = ten[0];

	for (int i = 0; i < TEN; i++)
	{
		if (min > ten[i])
		{
			min = ten[i];
		}
	}
	
	//최대값 계산
	int max = ten[0];
	for (int i = 0; i < TEN; i++)
	{
		if (max < ten[i])
		{
			min = ten[i];
		}
	}

	//분산 계산을 위한 평균
	int sum = 0;
	for (int i = 0; i < TEN; i++)
	{
		sum += ten[i];
	}
	int avg = sum / TEN;

	//분산 계산 (각 정수 - 편차)^2 의 합 / 정수 개수
	int var = 0;
	for (int i = 0; i < 10; i++)
	{
		var += pow(ten[i] - avg, 2);
	}
	var /= TEN;

	//표준편차 계산
	int std = sqrt(var);

	printf("\n");
	printf("number of input data = %d, min = %d, max = %d, avg = %d, var = %d, std = %d", TEN, min, max, avg, var, std);;
}