
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


typedef struct  Mystruct   //����typedef ��myΪ����
{
	int num;
	double db;


}my;  //����typedef ��myΪ����

typedef struct  Mystruct my1;   //my1 ����

union Myunion
{
	int num;
	double db;

};
typedef union Myunion myy1;  //myy1 ����


void main23()
{
	struct Mystruct my1 = { .num = 10,13.5 };

	union Myunion myu1 = { 10 };//�������ʼ��ֻ�ܶ��嶨��һ��

	system("pause");
}