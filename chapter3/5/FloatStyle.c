#include<stdio.h>

int main()
{
	float fFloatStyle;			/*定义单精度类型变量*/
	fFloatStyle=1.23f;			/*为变量进行赋值*/
	printf("%f\n",fFloatStyle);	/*输出变量的值*/
    printf("%.2f\n",fFloatStyle);	/*输出变量的值*/
    double fDoubleStyle;
    fDoubleStyle=2.5688888888;
    printf("%f\n",fDoubleStyle);
    return 0;					/*程序结束*/
}