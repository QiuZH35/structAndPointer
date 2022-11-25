
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct data
{
	int num;
};



void main()
{
	//int a[3][4];
	////a+1  (*p)[4]
	//printf("%p , %p", a, a + 1);


	int k = 0;
	struct data(*p)[10] = malloc(sizeof(struct data) * 90);//a[9][10]
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%3d  , %3d",(p[i][j]).num, (*(*(p + i) + j)).num = k++);   //(p[i][j]).num

		}
		printf("\n");
	}




	system("pause");
}




void main1()
{
	//struct data* p = malloc(sizeof(struct data) * 10);//p[10]
	
	struct data* p = alloca(sizeof(struct data) * 10);
	int i = 0;
	for (struct data* newp = p; newp < p + 10; newp++)
	{
		printf("\n%d , %p", ( (*(newp)).num) = i++, newp);
	}
	system("pause");
}



void main2123()
{
	struct data** pp;
	int num = 0;
	pp = malloc(sizeof(struct data*) * 10);  //·Ö¿éÊý×é
	for (int i = 0; i < 10; i++)
	{
		pp[i] = malloc(sizeof(struct data) * i + 2);
		for (struct data* newp = pp[i]; newp < pp[i] + i + 2; newp++)
		{
			printf("%3d", ( *(newp)).num = num++);
		}
		printf("\n");
	}

	system("pause");
}