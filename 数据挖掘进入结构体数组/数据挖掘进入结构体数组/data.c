
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char str[1024] = "521276402----hanlei@19940403 \
286738260----WEIPEI559720 \
501223616----feng66532008 \
851400824----shuidongwo520 \
1340382355----huang.512yang. \
1061817115----fz62wangyong1983 \
347232860----20080811 \
1028181591----7404850554 \
120539543----0.0123456789 \
819781633----zmt1993826 \
438905700----320675 \
346083956----devl,1017 \
286124126----xuqiang1988 \
4008167599----234567 \
937350113----MAWENcxn1020 \
853249795----5385939d \
710448740----15025980407lv \
1145664497----13625247649 \
170516392----2579764lcxxx \
554040764----521521dlm";


struct info
{
	long long QQ;
	char password[16];
};


struct infos
{
	struct info* pinfo;
	int length;


}myinfos;



int getnum(char *str)
{
	 int i = 0;
	for (char* p = strstr(str, "----"); p != NULL; p= strstr(p + 4, "----"))//��������
	{
		
		i++;
	}

	return i;

}

void init()
{
	int length = getnum(str);
	myinfos.pinfo = malloc(sizeof(struct info) * length);//�����ڴ�
	myinfos.length = length;//��ʶ����

}

void datainit(char *str)
{
	int length = strlen(str);
	for (char* p = str; p < str +length; p++)
	{
		if (*p == ' ')
		{
			*p = '\0';
		}
	}
	for (char* px = str,ch=0;px<str+length;ch++)
	{
		//printf("\n %s %d", px ,ch);//�����±���
		char* pnew = malloc(sizeof(char) * strlen(px) + 1);//�����ڴ棬��Ϊ����
		strcpy(pnew, px);//���渱��

		char* pwei = strstr(pnew, "----");
		*pwei = '\0';
		
		
		sscanf(pnew, "%lld", &myinfos.pinfo[ch].QQ); //ɨ���ַ�����longlong����

		sprintf(myinfos.pinfo[ch].password, "%s", pwei + 4);//��������

		px+=strlen(px)+1;
	}

}


void showalldata()
{
	for (int i = 0; i < myinfos.length; i++)
	{
		printf("QQ= %lld , password= %s\n", myinfos.pinfo[i].QQ, myinfos.pinfo[i].password);
	}

}

void help()
{
	printf("1��ʾ����\n");
	printf("2ɾ������\n");
	printf("3��������\n");
	printf("4�޸�����\n");
	printf("5��������\n");
	printf("6��ʾȫ������\n");
	printf("7����QQ����\n");
	printf("8����\n");
	printf("9help\n");
}


void main()
{
	init();
	datainit(str);
	printf("\n\n");
	//showdata();
	help();
	while (1)
	{
		char ch = getch(); //ʱʱ��������,��������
		//getchar() ;
		switch (ch)
		{
		case '6':
				showalldata();
				break;
		case '8':
			system("cls");
			break;
		case '9':
			help();
			break;
		default :
			break;
		}




	}

	system("pause");
}