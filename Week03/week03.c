#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
	//!格式化输出
	// %d  int
	// %u 无符号int型
	// %f float double
	// %e 指数形式输出float double
	// %c 字符

	// %10f 指定最小域宽
	// %10.4f 精度

	// %% 连续两个百分号输出一个百分号

	//---R
	// 格式化键盘输入
	//int  a, b;
	//scanf("%d%*c%d", &a, &b);
	//printf("a = %d, b = %d\n", a, b);
	//return 0;

	// 通过scanf返回值来判断是否正确读入数据

	// *符，抑制输入字符，可指定跳过读入数据
	//---R
#pragma region 课堂讨论
	//int    a;
	//char   b;
	//float  c;
	//printf("Please input an integer:");
	////!添加%*c解决回车当作字符读入
	//scanf("%d%*c", &a);
	//printf("integer:%d\n", a);

	//printf("Please input a character:");
	//scanf("%c", &b);
	//printf("character:%c\n", b);

	//printf("Please input a float number:");
	//scanf("%f", &c);
	//printf("float:%f\n", c);

	//return 0;
#pragma endregion 课堂讨论
	//---R
#pragma region regionName
   //字符输出函数 putchar
   //字符输入函数 getchar

	//由于c语言的输入机制问题，暂无法解决输入多个字符情况时，它对一次输入循环多次的问题
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

	//!+第三周编程习题
	////1.计算两个数的平方和
	//float x, y;
	//float result;
	//printf("Please input x and y:\n");
	//scanf("%f, %f", &x, &y);
	//result = (float)pow(x, 2) + (float)pow(y, 2);
	//printf("Result=%.2f\n", result);
	//return 0;

	// 2.逆序数拆分
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

	//3.拆分英文名
	//char ch01, ch02, ch03;
	//printf("Input your English name:\n");
	//scanf("%c%c%c", &ch01, &ch02, &ch03);

	//printf("%c%c%c\n", ch01 - 32, ch02, ch03);

	//printf("%c:%d\n", ch01, ch01 - 96);
	//printf("%c:%d\n", ch02, ch02 - 96);
	//printf("%c:%d\n", ch03, ch03 - 96);
	//return 0;

	//4.计算体脂
	int w, h;//身高厘米、体重公斤
	float t;

	printf("Input weight, height:\n");
	scanf("%d,%d", &w, &h);

	printf("weight=%d\n", w * 2);//按斤输出
	printf("height=%.2f\n", h / 100.0);//按米输出

	t = w / pow((h / 100.0), 2);
	printf("t=%.2f\n", t);

	return 0;
}