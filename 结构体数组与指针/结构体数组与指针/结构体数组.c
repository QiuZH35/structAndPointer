
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct //匿名结构体
{

	int num;
	
	double db;

}*p,x[10],z; //p指针，x数组，z变量



struct Mystruct
{
	int id;
	char *str[10];
}my2[10]; //第二种定义




void main12()
{
	//struct Mystruct my[10];//第一种定义

	//struct Mystruct my[2] = { {10,20},{22,33} }; //数组初始化一般形式，可以省略数组大小
	//struct Mystruct* p = (struct Mystruct[]){ {10,20},{22,23} };

	struct Mystruct my[2] = { {10,"20"},{22,"20"}}; 
	struct Mystruct* p = (struct Mystruct[]){ 10,"20",22,"23" };  //没有大括号需要按照顺序

	struct Mystruct my23[3] = { 0 };  //全部初始化为零

	system("pause");
}



struct csdn
{
	char name[100];
	char password[100];
	char email[100];


}csdndata[2] =
{
	{"zhangsan","jiohoadf","qq123444@qq.com"},
	{"lisi","jiohoadfss","qq12344dd4@qq.com"},

},*csdnp;

void main2()
{
	csdnp = (struct csdn[]){
		{"zhangsan","jiohoadf","qq123444@qq.com"},
	{"lisi","jiohoadfss","qq12344dd4@qq.com"},
	};

	//成员引用
	for (int i = 0; i < sizeof(csdndata) / sizeof(csdndata[0]); i++)
	{
		//a[i].email == (&a[i])->email     
		//char* p = strstr(csdndata[i].email, "qq123444@qq.com");
		//char* p = strstr((&csdndata[i])->email, "qq123444@qq.com");


		// (csdn+i)->email  == *(csdnp+i).email  == csdnp[i].email
		//char* p = strstr((csdnp[i]).email, "qq123444@qq.com");
		//char* p = strstr(((csdnp+i))->email, "qq123444@qq.com");
		char* p = strstr((*(csdnp + i)).email, "qq123444@qq.com");


		if (p != NULL)
		{
			puts(csdndata[i].password);
		}


	}



	system("pause");
}