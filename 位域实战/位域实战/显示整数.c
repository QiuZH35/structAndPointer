
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//现代手机 ，电脑 ，地位低字节 （小端） ，unix 服务器地位高字节（大端）
//
// 1   0001 
//     0000
//
// 1
// 0
// 0
// 0
// 0
// 0
// 0
// 0
//地位低字节

struct bits
{
	unsigned char ch1 : 1;
	unsigned char ch2 : 1;
	unsigned char ch3 : 1;
	unsigned char ch4 : 1;
	unsigned char ch5 : 1;
	unsigned char ch6 : 1;
	unsigned char ch7 : 1;
	unsigned char ch8 : 1;
};

void main()
{
	double data = 2.5;
	int length = 8;

	struct bits *p=&data;
	printf("%p\n", &data);

	while (length--)
	{
		printf("%d%d%d%d  %d%d%d%d ",
			(p + length)->ch8,
			(p + length)->ch7,
			(p + length)->ch6,
			(p + length)->ch5,
			(p + length)->ch4,
			(p + length)->ch3,
			(p + length)->ch2,
			(p + length)->ch1
		);


	}

	system("pause");
}