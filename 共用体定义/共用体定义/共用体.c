
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//要求至少一位成员
union Myunion  //内存共享
{
	int data;
	char ch;
	int num;
	double db;


};


void main()
{
	//printf("%d\n", sizeof(union Myunion)); //长度取最长的





	system("pause");
}