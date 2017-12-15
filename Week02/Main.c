#include <stdio.h>
#include <math.h>
int main(void)
{
	//算术运算符
	int a = 11 / 5;

	//算术运算符的实例
	//输出一个三位整数的个位、十位和百位数字
	printf("请输入一个3位整数：");
	int number;
	scanf("%d", &number);

	//通过求余来求
	int ones = number % 10;
	int temp = number / 10;
	int tens = temp % 10;
	temp = temp / 10;
	int hundred = temp % 10;

	printf("三位正整数%d： 百位 = %d\t十位 = %d\t个位 = %d", number, hundred, tens, ones);

	//求余的作用映射

	//强制类型的转换
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