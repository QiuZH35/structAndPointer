
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//λ�򣬽�Լ�ڴ� 
struct Mystruct
{
	unsigned int a:5;  //�� 0-31 2^5
	unsigned int b:5;	//�� 0-12 2^5
	int c:16;  //�� 2^16
};



void main232()
{
	//printf("%d", sizeof(struct Mystruct));
	struct  Mystruct my1;
	my1.a = 23;
	my1.b = 5;
	my1.c = 1999;
	printf("%d,%d,%d", my1.a, my1.b, my1.c);




	system("pause");
}


//λ���С����Ĭ�϶���Ļ����ϣ��������������ͬ���������ʹ�С�غϣ��������ʹ�С�����⿪��
struct data
{
	unsigned short num1 : 1;
	unsigned int num2 : 1;

};

void main()
{
	printf("%d\n", sizeof(struct data));

	struct data data1;
	data1.num1 = 2;  //������ 10   ��ȡһλ 
	printf("%d", data1.num1);

	system("pause");
}