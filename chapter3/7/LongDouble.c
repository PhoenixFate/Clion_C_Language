#include<stdio.h>

int main()
{
	long double fLongDouble;		/*定义长双精度变量*/
	fLongDouble=46.257;				/*为变量赋值*/
	printf("%Lf\n",fLongDouble);		/*将变量值进行输出*/
	printf("%llu\n", sizeof(fLongDouble));
	return 0;						/*程序结束*/
}