
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct mystruct
{
	int a[10];
	int length;



};

void run(struct mystruct my1)//�ṹ�����鸱������,�ṹ���ڲ������顣
{
	for (int i = 0; i < my1.length; i++)
	{
		printf("%d\n", my1.a[i]+=i);
	}
}

struct mystruct testrun()  //�ṹ�巵��ֵҲ�и�������
{
	struct mystruct my1 = { {1,2,3,4,5,6,7,8,9,10},10 };

	printf("%p  %p", my1.a, my1.a + 1);
	printf("\n%p  %p", &my1.a, &my1.a + 1);

	return my1;
}



//���ֻ�ýṹ�巵��ֵ�������������ṹ���ڶ���һ���ṹ��ָ�����ڽ��շ���ֵ
struct mystructtow
{
	struct mystruct* p;
	int length;
};


void main33()
{
	struct mystruct my2=testrun();

	printf("\n\n\n");



	system("pause");
}


void main2()
{
	struct mystruct my1 = { {1,2,3,4,5,6,7,8,9,10},10 };
	 run(my1);
	printf("\n\n");
	for (int i = 0; i < my1.length; i++)
	{
		printf("%d\n", my1.a[i]);
	}

	system("pause");
}





struct info
{
	char str[10];
	int age;
}infos[3] = {{"zhangsan",10},{"lisi",22}, {"wangwu",23}};



//д��
//struct info infos[3]
//struct info infos[]
//struct info*infos
void change(struct info *infos) //�ṹ��ָ��������Ϊ�������˻�Ϊָ��
{
	infos[2].age = 88;  //ָ���޸ĵ���ԭ��

}



void main23()
{
	change(infos);
	for (int i = 0; i < 3; i++)
	{
		printf("\n%s,%d", infos[i].str, infos[i].age);

	}

	system("pause");
}