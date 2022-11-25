
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


typedef struct  Mystruct   //加上typedef 后my为类型
{
	int num;
	double db;


}my;  //加上typedef 后my为类型

typedef struct  Mystruct my1;   //my1 类型

union Myunion
{
	int num;
	double db;

};
typedef union Myunion myy1;  //myy1 类型


void main23()
{
	struct Mystruct my1 = { .num = 10,13.5 };

	union Myunion myu1 = { 10 };//共用体初始化只能定义定义一个

	system("pause");
}