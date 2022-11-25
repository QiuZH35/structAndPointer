
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <malloc.h>


struct mystruct
{
	int id;
	int nums;

};




void main2()
{
	int num;
	scanf("%d", &num);

	struct mystruct* p1 = malloc(sizeof(struct mystruct) * num);//堆区
	struct mystruct* p2 = alloca(sizeof(struct mystruct) * num);//栈区
	memset(p1, 0, sizeof(struct mystruct) * num);
	memset(p2, 0, sizeof(struct mystruct) * num);  //初始化为0
	for (int i = 0; i < num; i++)
	{

		printf("%d  %d   ,  %d  %d\n", (p1+i)->id = i, (p1+i)->nums, (*(p2 + i)).id = i,(* (p2 + i)).nums);

	}

	for (int i = 0; i < num; i++)
	{
		int id;
		scanf("%d", &id);
		for (int j = 0; j < num; j++)
		{
			if ( ((p1 + j)->id) == id )
			{
				(*(p1 + j)).nums++;
				p2[j].nums++;
				break;
			}
		}

	}

	printf("\n\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d  %d   ,  %d  %d\n", (p1 + i)->id, (p1 + i)->nums, (*(p2 + i)).id, (*(p2 + i)).nums);

	}


	system("pause");
}

struct csdn
{
	char name[100];
	char password[100];
	char email[100];


}; 

void main()
{
	struct csdn csdndata[100];//int a[100]
	struct cscn* p = csdndata;//int *p;

	struct csdn csdndatax[10][10];//int a[10][10]
	struct csdn(*px)[10] = csdndatax;//int (*p)[10]=malloc(sizeof(a)*100)

	struct csdn(*pnew)[10] = malloc(sizeof(struct csdn) * 50); //int a[5][10]
	pnew[3][4];



	syetem("pause");
}