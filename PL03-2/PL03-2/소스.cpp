#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define TEN 10

int main()
{
	int ten[TEN] = { 0 };
	printf("Input 10 integer data : ");

	//10���� ���� �Է¹ޱ�
	for (int i = 0; i < TEN; i++)
	{
		scanf("%d", &ten[i]);
	}

	//10���� ���� ����ϱ�
	for (int i = 0; i < TEN; i++)
	{
		printf("%d ", ten[i]);
	}

	//�ּҰ� ���
	int min = ten[0];

	for (int i = 0; i < TEN; i++)
	{
		if (min > ten[i])
		{
			min = ten[i];
		}
	}
	
	//�ִ밪 ���
	int max = ten[0];
	for (int i = 0; i < TEN; i++)
	{
		if (max < ten[i])
		{
			min = ten[i];
		}
	}

	//�л� ����� ���� ���
	int sum = 0;
	for (int i = 0; i < TEN; i++)
	{
		sum += ten[i];
	}
	int avg = sum / TEN;

	//�л� ��� (�� ���� - ����)^2 �� �� / ���� ����
	int var = 0;
	for (int i = 0; i < 10; i++)
	{
		var += pow(ten[i] - avg, 2);
	}
	var /= TEN;

	//ǥ������ ���
	int std = sqrt(var);

	printf("\n");
	printf("number of input data = %d, min = %d, max = %d, avg = %d, var = %d, std = %d", TEN, min, max, avg, var, std);;
}