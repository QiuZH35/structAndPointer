
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ṹ���С������Ա������������,������Ҳ���
//����Ĭ�϶����ֽڣ����յ�ǰ�ṹ��������ͽ��ж���

struct Mystruct
{

	char str[13];
	int db;


};


struct Mystructx
{
	struct Mystruct x;  //�ṹ��Ƕ�׵�����£����������Ͳ������ڵ�ǰ�ṹ��
	char ch;
};


union myunion
{
	char str[13];  //16 
	short db;


};
void main()
{
	printf("%d", sizeof(struct Mystructx));




	system("pause");
}