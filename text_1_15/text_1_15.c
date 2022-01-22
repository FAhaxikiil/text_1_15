#define  _CRT_SECURE_NO_WARNINGS  //解决C4996的错误
#pragma warning(disable:6031)
#include<stdio.h>


	//变量--常量	
//定义变量的方式为：类型+变量名+赋值
//变量的分类：局部变量/全局变量

int main()
{
	int num1;
	int num2;
	int num3;
	printf("输入两个相加的数");
	scanf("%d%d", &num1, &num2);

	num3 = num1 + num2;
	printf("相加之后等于%d", num3);
	return 0;
}

