
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct mystruct
{
	int a[10];
	int length;



};

void run(struct mystruct my1)//结构体数组副本机制,结构体内部有数组。
{
	for (int i = 0; i < my1.length; i++)
	{
		printf("%d\n", my1.a[i]+=i);
	}
}

struct mystruct testrun()  //结构体返回值也有副本机制
{
	struct mystruct my1 = { {1,2,3,4,5,6,7,8,9,10},10 };

	printf("%p  %p", my1.a, my1.a + 1);
	printf("\n%p  %p", &my1.a, &my1.a + 1);

	return my1;
}



//如果只用结构体返回值用这种做法，结构体内定义一个结构体指针用于接收返回值
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



//写法
//struct info infos[3]
//struct info infos[]
//struct info*infos
void change(struct info *infos) //结构体指针数组作为参数会退化为指针
{
	infos[2].age = 88;  //指针修改的是原本

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