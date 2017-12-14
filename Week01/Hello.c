#include <stdio.h>

#define PI 3.14159
#define  R 5.3
int main(void)
{
	printf("Hello world!\n");

	const int AMOUNT = 100;
	int price = 0;
	printf("请输入价格(元):");
	scanf("%d", &price);
	int change = AMOUNT - price;
	printf("剩余%d元\n", change);

	//printf("%f\n", 10.0 / 3);

	//sizeof获取变量或类型数据所占的字节数
	//char ch;
	//short a;
	//int b;
	//long c;
	//float d;
	//double e;
	//ch = 'a';
	//a = 1;
	//b = 2;
	//c = 3;
	//d = 1.5;
	//e = 1.5;
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//printf("area= %f\n", PI*r*r);
	//printf("circumstance = %f\n", 2 * PI*r);

	//const float PI = 3.14159f;
	//const float r = 5.3f;
	//printf("area= %f\n", PI*r*r);
	//printf("circumstance = %f\n", 2 * PI*r);

	printf("PI * R * R = %f\n", PI * R * R);
	printf("2 * PI * R = %f\n", 2 * PI * R);

	getchar();
	return 0;
}