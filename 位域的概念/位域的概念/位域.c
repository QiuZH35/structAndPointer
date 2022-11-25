
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//位域，节约内存 
struct Mystruct
{
	unsigned int a:5;  //日 0-31 2^5
	unsigned int b:5;	//月 0-12 2^5
	int c:16;  //年 2^16
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


//位域大小，在默认对齐的基础上，多个数据类型相同，按照类型大小重合，超出类型大小，另外开辟
struct data
{
	unsigned short num1 : 1;
	unsigned int num2 : 1;

};

void main()
{
	printf("%d\n", sizeof(struct data));

	struct data data1;
	data1.num1 = 2;  //二进制 10   截取一位 
	printf("%d", data1.num1);

	system("pause");
}