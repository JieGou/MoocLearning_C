#include <stdio.h>
#include <math.h>
int main(void)
{
	//���������
	int a = 11 / 5;

	//�����������ʵ��
	//���һ����λ�����ĸ�λ��ʮλ�Ͱ�λ����
	printf("������һ��3λ������");
	int number;
	scanf("%d", &number);

	//ͨ����������
	int ones = number % 10;
	int temp = number / 10;
	int tens = temp % 10;
	temp = temp / 10;
	int hundred = temp % 10;

	printf("��λ������%d�� ��λ = %d\tʮλ = %d\t��λ = %d", number, hundred, tens, ones);

	//���������ӳ��

	//ǿ�����͵�ת��
	int total = 15, num = 2;
	float aver;
	aver = (float)total / num;

	//int aA = x2a2;

	//int bB = 038x;

	//int cC = 10110B;

	int dD = 0xffa;

	getchar();
	return 0;
}