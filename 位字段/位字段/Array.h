#pragma once
#include <stdio.h>
#include <stdlib.h>

#define INT int

struct MyArray
{
	INT* p;//�׵�ַ
	int memlength;//�ڴ泤��
	int arraylength;//�߼�����
	int sorttstat;//�����Ƿ�����0����1�Ӵ�С��2��С����


};

struct Res
{
	INT** pp;//����ָ�룬�洢ָ������ĵ�ַ
	int n;//����
};


void init(struct MyArray* parray);//��ʼ���ṹ��
void add(struct MyArray* parray, INT data);//����һ������
void addarray(struct MyArray* parray, INT *pdata,int n);//����һ������
void printfall(struct MyArray* parray);//��ӡ����
INT* Finddata(struct MyArray* parray, INT data);//��������
struct Res Findfirst(struct Myarray* parray, INT data);

void delobj(struct MyArray* parray, INT data);//ɾ������
void delobjs(struct MyArray* parray, INT data);//ɾ�������ͬ��Ԫ��