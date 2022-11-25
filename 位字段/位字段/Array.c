#include "Array.h"

void init(struct MyArray* parray)//初始化结构体
{
	parray->p = NULL;
	parray->arraylength = 0;
	parray->memlength = 0;
	parray->sorttstat = 0;

}

void add(struct MyArray* parray, INT data)//插入一个数据
{
	if (parray->p == NULL)  //结构体为空开辟空间
	{
		parray->p = malloc(sizeof(INT));
		parray->arraylength = 1;
		parray->memlength = 1;
		parray->p[parray ->arraylength - 1] = data;//插入数据
	}
	else
	{

		if (parray->memlength == parray->arraylength)//满了
		{
			parray->p = realloc(parray->p, (parray->memlength + 1) * sizeof(INT));
			parray->arraylength += 1;
			parray->memlength += 1;
			parray->p[parray->arraylength - 1] = data;//插入数据
		}


	}




}
void addarray(struct MyArray* parray, INT* pdata, int n)//插入一组数据
{
	if (parray->p == NULL)
	{
		parray->p = malloc(sizeof(INT)*n);
		parray->arraylength = n;
		parray->memlength = n;
		for (int i = 0; i < n; i++)
		{
			parray->p[i] = pdata[i];  //内存拷贝
		}

	}
	else
	{
		if (parray->memlength == parray->arraylength)//满了
		{
			parray->p = realloc(parray->p, (parray->memlength + n) * sizeof(INT));
			
			for (int i = 0; i < n; i++)
			{
				parray->p[i + parray->arraylength] = pdata[i];
			}
			parray->arraylength += n;
			parray->memlength += n;//长度增加

		}


	}



}
void printfall(struct MyArray* parray)//打印数据
{
	if (parray->p == NULL)
	{
		printf("数组为空");
		return;
	}
	else
	{
		for (int i = 0; i < parray->arraylength; i++)
		{
			printf("%3d", parray->p[i]);
		}
		printf("\n\n");
	}
}

INT * Finddata(struct MyArray* parray, INT data)//查询功能
{
	
	INT*Findp=NULL;
	
	if (parray->p != NULL)
	{
		
		int length = parray->arraylength;
		for (int i = 0; i < length; i++)
		{
			if (parray->p[i] == data)
			{
				Findp = &(parray->p[i]);
				return Findp;//返回地址
			}

		}

	}
	else
	{
		return Findp;
	}
	 
}



struct Res Findfirst(struct MyArray* parray,INT data)
{
	struct Res ResA;//定义结构体用于返回
	ResA.n = 0;
	ResA.pp = NULL;
	for (int i = 0; i < parray->arraylength; i++)
	{
		if (data == parray->p[i])
		{
			ResA.n++;//统计
		}

	}
	ResA.pp = (INT*)malloc(sizeof(INT*) * ResA.n);//动态指针数组

	int j = 0;
	for (int i = 0; i < parray->arraylength; i++)
	{
		if (data == parray->p[i])
		{
			ResA.pp[i] = &parray->p[i]; //存入地址
			j++;//向前移动
		}
	}
	return ResA;
}



void delobj(struct MyArray* parray, INT data)//删除数据
{
	int* pcurr = Finddata(parray, data);
	if (pcurr == NULL)
	{
		return;//没有找到
	}
	else
	{
		int length = pcurr - parray->p;//指针相减得到元素个数
		for (int i = length; i < parray->arraylength-1; i++)//确定移动个数
		{
			parray->p[i] = parray->p[i + 1];//删除元素后面的元素往前移动
		}
		parray->arraylength -= 1;//逻辑长度减一
	}


}
void delobjs(struct MyArray* parray, INT data)//删除多个相同元素
{
	for (int* pcurr = Finddata(parray, data); pcurr != NULL; pcurr = Finddata(parray, data))
	{
		delobj(parray,data);
	}
	
}