
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//结构体大小必须可以被最宽类型整除,共用体也如此
//设置默认对齐字节，按照当前结构体最宽类型进行对齐

struct Mystruct
{

	char str[13];
	int db;


};


struct Mystructx
{
	struct Mystruct x;  //结构体嵌套的情况下，最宽基本类型不局限于当前结构体
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