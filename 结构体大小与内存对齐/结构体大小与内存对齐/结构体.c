
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



//结构体大小大于等于变量成员大小之和
//结构体大小必须可以整除最宽基本成员
//结构体成员地址-结构体首地址=地址偏移量，必须是当前成员的整倍数
//结构体尾部不足最宽成员整除的地址，将会被填充

//结构体相近的成员，未超过int大小可以被int整除的情况下会压缩内存

//结构体内存，注意，节约内存

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

//											  （转为int）&首地址（转为结构体指针）0到成员变量的的距离				
#define OFFSETOF(struct_name,maber_name)     ((int)&((struct_name*)0)->maber_name)//偏移量计算


void main()
{
	struct mystruct my1;
	printf("%d", sizeof(struct mystruct));

	printf("\n%d",(int) & ((struct mystruct*)0)->num5);
	printf("\n%d", OFFSETOF(struct mystruct, db));
	printf("\n%d", &((struct mystruct*)0)->db);
	system("pause");
}