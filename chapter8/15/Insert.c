#include <stdio.h>
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
	int i;
	int a[10];
	int iTemp; 
	int iPos; 
	printf("为数组元素赋值：\n");
	/*从键盘为数组元素赋值*/
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}

	/*从小到大排序*/
	for(i=1;i<10;i++) 							/*循环数组中元素*/
	{ 
		iTemp = a[i]; 						/*设置插入值*/
		iPos = i-1; 
		while((iPos>=0) && (iTemp<a[iPos])) 	/*寻找插入值的位置*/
		{ 
			a[iPos+1] = a[iPos]; 				/*插入数值*/
			iPos--; 
		} 
		a[iPos+1] = iTemp; 
	}

	/*输出数组*/
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);			/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");		/*输出换行*/
	}

	return 0;						/*程序结束*/
}
