
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



//�ṹ���С���ڵ��ڱ�����Ա��С֮��
//�ṹ���С�������������������Ա
//�ṹ���Ա��ַ-�ṹ���׵�ַ=��ַƫ�����������ǵ�ǰ��Ա��������
//�ṹ��β����������Ա�����ĵ�ַ�����ᱻ���

//�ṹ������ĳ�Ա��δ����int��С���Ա�int����������»�ѹ���ڴ�

//�ṹ���ڴ棬ע�⣬��Լ�ڴ�

struct mystruct
{
	char num1;
	char num6;
	int num5;
	
	
	double num2;
	int num3;
	char num4;
	double db;
};

//											  ��תΪint��&�׵�ַ��תΪ�ṹ��ָ�룩0����Ա�����ĵľ���				
#define OFFSETOF(struct_name,maber_name)     ((int)&((struct_name*)0)->maber_name)//ƫ��������


void main()
{
	struct mystruct my1;
	printf("%d", sizeof(struct mystruct));

	printf("\n%d",(int) & ((struct mystruct*)0)->num5);
	printf("\n%d", OFFSETOF(struct mystruct, db));
	printf("\n%d", &((struct mystruct*)0)->db);
	system("pause");
}