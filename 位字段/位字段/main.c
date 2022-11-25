
#define _CRT_SECURE_NO_WARNINGS
#include "Array.h"


//void main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 1,2,3,4,5,6,7,5,9,5 };
//	struct MyArray My1;
//	init(&My1);
//	/*for (int i = 0; i < 10; i++)
//	{
//		add(&My1, a[i]);
//	}*/
//	addarray(&My1, a, 10);
//	addarray(&My1, b, 10);
//	//INT* Findp=Finddata(&My1,5);
//	printfall(&My1);
//	delobjs(&My1, 5);
//	//printf("\n%p", Findp);
//	printfall(&My1);
//	system("pause");
//}


int Findnum(int* a, int* b, int num)
{
	int flag = 1; //假设相等
	for (int i = 0; i < num; i++)
	{
			if (*(a + i) != *(b + i))
			{
				flag = 0;
			}
	}
	return flag;
}
void main()
{
	int a[10] = { 1,2,898,8,55,16,7,8,9,11 };
	int b[10] = { 1,2,898,8,55,16,7,8,9,10 };

	if (Findnum(a, b, 10))
	{
		printf("相等");
	 }
	else
	{
		printf("不等");
	}
	
	system("pause");
}