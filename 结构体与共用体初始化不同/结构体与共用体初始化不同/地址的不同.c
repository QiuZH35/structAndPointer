
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct mystruct
{
	int num;
	double db;
}mys;

union Myunion
{
	int num;
	double db;
}myu;

void main()
{

	printf("%p %p", &mys.num, &mys.db);
	printf("\n%p %p", &myu.num, &myu.db); //共同用一片地址

}