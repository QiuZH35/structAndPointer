#include "Array.h"

void init(struct MyArray* parray)//��ʼ���ṹ��
{
	parray->p = NULL;
	parray->arraylength = 0;
	parray->memlength = 0;
	parray->sorttstat = 0;

}

void add(struct MyArray* parray, INT data)//����һ������
{
	if (parray->p == NULL)  //�ṹ��Ϊ�տ��ٿռ�
	{
		parray->p = malloc(sizeof(INT));
		parray->arraylength = 1;
		parray->memlength = 1;
		parray->p[parray ->arraylength - 1] = data;//��������
	}
	else
	{

		if (parray->memlength == parray->arraylength)//����
		{
			parray->p = realloc(parray->p, (parray->memlength + 1) * sizeof(INT));
			parray->arraylength += 1;
			parray->memlength += 1;
			parray->p[parray->arraylength - 1] = data;//��������
		}


	}




}
void addarray(struct MyArray* parray, INT* pdata, int n)//����һ������
{
	if (parray->p == NULL)
	{
		parray->p = malloc(sizeof(INT)*n);
		parray->arraylength = n;
		parray->memlength = n;
		for (int i = 0; i < n; i++)
		{
			parray->p[i] = pdata[i];  //�ڴ濽��
		}

	}
	else
	{
		if (parray->memlength == parray->arraylength)//����
		{
			parray->p = realloc(parray->p, (parray->memlength + n) * sizeof(INT));
			
			for (int i = 0; i < n; i++)
			{
				parray->p[i + parray->arraylength] = pdata[i];
			}
			parray->arraylength += n;
			parray->memlength += n;//��������

		}


	}



}
void printfall(struct MyArray* parray)//��ӡ����
{
	if (parray->p == NULL)
	{
		printf("����Ϊ��");
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

INT * Finddata(struct MyArray* parray, INT data)//��ѯ����
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
				return Findp;//���ص�ַ
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
	struct Res ResA;//����ṹ�����ڷ���
	ResA.n = 0;
	ResA.pp = NULL;
	for (int i = 0; i < parray->arraylength; i++)
	{
		if (data == parray->p[i])
		{
			ResA.n++;//ͳ��
		}

	}
	ResA.pp = (INT*)malloc(sizeof(INT*) * ResA.n);//��ָ̬������

	int j = 0;
	for (int i = 0; i < parray->arraylength; i++)
	{
		if (data == parray->p[i])
		{
			ResA.pp[i] = &parray->p[i]; //�����ַ
			j++;//��ǰ�ƶ�
		}
	}
	return ResA;
}



void delobj(struct MyArray* parray, INT data)//ɾ������
{
	int* pcurr = Finddata(parray, data);
	if (pcurr == NULL)
	{
		return;//û���ҵ�
	}
	else
	{
		int length = pcurr - parray->p;//ָ������õ�Ԫ�ظ���
		for (int i = length; i < parray->arraylength-1; i++)//ȷ���ƶ�����
		{
			parray->p[i] = parray->p[i + 1];//ɾ��Ԫ�غ����Ԫ����ǰ�ƶ�
		}
		parray->arraylength -= 1;//�߼����ȼ�һ
	}


}
void delobjs(struct MyArray* parray, INT data)//ɾ�������ͬԪ��
{
	for (int* pcurr = Finddata(parray, data); pcurr != NULL; pcurr = Finddata(parray, data))
	{
		delobj(parray,data);
	}
	
}