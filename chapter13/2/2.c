#include<stdio.h>
#include"f1.h"								/*包含文件f1.h*/
int main()
{
	int a;
	P("please input:\n");
	S(D,&a); 								/*调用f1中的宏定义*/
	P("the number is:\n");
	P(D,a); 									/*调用f1中的宏定义*/
	P("\n");
	P(C,a);
	P("\n");

	return 0;
}

