#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
	//!��ʽ�����
	// %d  int
	// %u �޷���int��
	// %f float double
	// %e ָ����ʽ���float double
	// %c �ַ�

	// %10f ָ����С���
	// %10.4f ����

	// %% ���������ٷֺ����һ���ٷֺ�

	//---R
	// ��ʽ����������
	//int  a, b;
	//scanf("%d%*c%d", &a, &b);
	//printf("a = %d, b = %d\n", a, b);
	//return 0;

	// ͨ��scanf����ֵ���ж��Ƿ���ȷ��������

	// *�������������ַ�����ָ��������������
	//---R
#pragma region ��������
	//int    a;
	//char   b;
	//float  c;
	//printf("Please input an integer:");
	////!���%*c����س������ַ�����
	//scanf("%d%*c", &a);
	//printf("integer:%d\n", a);

	//printf("Please input a character:");
	//scanf("%c", &b);
	//printf("character:%c\n", b);

	//printf("Please input a float number:");
	//scanf("%f", &c);
	//printf("float:%f\n", c);

	//return 0;
#pragma endregion ��������
	//---R
#pragma region regionName
   //�ַ�������� putchar
   //�ַ����뺯�� getchar

	//����c���Ե�����������⣬���޷�����������ַ����ʱ������һ������ѭ����ε�����
	//char ch;
	//ch = 68;
	//bool status = false;
	//do
	//{
	//	printf("Press a key and then press Enter:");

	//	//ch = getchar();
	//	status = scanf_s(" %c", &ch, 2);

	//	//fflush(stdin);
	//	//getchar();
	//	if (ch<'A' || ch>'Z')
	//	{
	//		status = false;
	//	}
	//} while (!status);

	//ch += 32;
	//printf("%c,%d\n", ch, ch);
#pragma endregion regionName

	//!+�����ܱ��ϰ��
	////1.������������ƽ����
	//float x, y;
	//float result;
	//printf("Please input x and y:\n");
	//scanf("%f, %f", &x, &y);
	//result = (float)pow(x, 2) + (float)pow(y, 2);
	//printf("Result=%.2f\n", result);
	//return 0;

	// 2.���������
	//int x, y;
	//int result;
	//int a, b;

	//printf("Input x:\n");
	//scanf("%d", &x);
	//y = abs(x) % 10 * 1000 +
	//	(abs(x) / 10) % 10 * 100 +
	//	(abs(x) / 100) % 10 * 10 +
	//	abs(x) / 1000;
	//printf("y=%d\n", y);

	//a = y / 100;
	//b = y % 100;
	//printf("a=%d,b=%d\n", a, b);
	//result = (int)pow(a, 2) + (int)pow(b, 2);
	//printf("result=%d\n", result);
	//return 0;

	//3.���Ӣ����
	//char ch01, ch02, ch03;
	//printf("Input your English name:\n");
	//scanf("%c%c%c", &ch01, &ch02, &ch03);

	//printf("%c%c%c\n", ch01 - 32, ch02, ch03);

	//printf("%c:%d\n", ch01, ch01 - 96);
	//printf("%c:%d\n", ch02, ch02 - 96);
	//printf("%c:%d\n", ch03, ch03 - 96);
	//return 0;

	//4.������֬
	int w, h;//������ס����ع���
	float t;

	printf("Input weight, height:\n");
	scanf("%d,%d", &w, &h);

	printf("weight=%d\n", w * 2);//�������
	printf("height=%.2f\n", h / 100.0);//�������

	t = w / pow((h / 100.0), 2);
	printf("t=%.2f\n", t);

	return 0;
}