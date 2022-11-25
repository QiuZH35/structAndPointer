#pragma once
#include <stdio.h>
#include <stdlib.h>

#define INT int

struct MyArray
{
	INT* p;//首地址
	int memlength;//内存长度
	int arraylength;//逻辑长度
	int sorttstat;//代表是否有序，0无序，1从大到小，2从小到大


};

struct Res
{
	INT** pp;//二级指针，存储指针数组的地址
	int n;//长度
};


void init(struct MyArray* parray);//初始化结构体
void add(struct MyArray* parray, INT data);//插入一个数据
void addarray(struct MyArray* parray, INT *pdata,int n);//插入一组数据
void printfall(struct MyArray* parray);//打印数据
INT* Finddata(struct MyArray* parray, INT data);//查找数据
struct Res Findfirst(struct Myarray* parray, INT data);

void delobj(struct MyArray* parray, INT data);//删除数据
void delobjs(struct MyArray* parray, INT data);//删除多个相同的元素