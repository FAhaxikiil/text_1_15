#define  _CRT_SECURE_NO_WARNINGS  //���C4996�Ĵ���
#pragma warning(disable:6031)
#include<stdio.h>


	//����--����	
//��������ķ�ʽΪ������+������+��ֵ
//�����ķ��ࣺ�ֲ�����/ȫ�ֱ���

int main()
{
	int num1;
	int num2;
	int num3;
	printf("����������ӵ���");
	scanf("%d%d", &num1, &num2);

	num3 = num1 + num2;
	printf("���֮�����%d", num3);
	return 0;
}

