#include<stdio.h>
#include <iostream.h>
#include <stdlib.h>

#include "../../base/osplatformutil.h"
int main()
{
#if defined I_OS_MAC
    printf("this is mac\n");
#elif defined I_OS_WIN32
    system("chcp 65001");
    printf("this is windows\n");
#elif defined I_OS_LINUX
    printf("this is linux\n");
#endif
	int i,j;
	int a[10];
	int iTemp; 
	printf("为数组元素赋值：\n");
	/*从键盘为数组元素赋值*/
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}
	/*从小到大排序*/
	for(i=1;i<10;i++) 				/*外层循环元素下标为1~9*/
	{ 
		for(j=9;j>=i;j--) 			/*内层循环元素下标为i~9*/
		{ 
			if(a[j]<a[j-1]) 		/*如过前一个数比后一个数大*/
			{ 
				/*交换两个数组元素的值*/
				iTemp  = a[j-1]; 
				a[j-1] = a[j]; 
				a[j]   = iTemp; 
			} 
		} 
	}

	/*输出数组*/
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);			/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");			/*输出换行*/
	}

	return 0;						/*程序结束*/
}
	
