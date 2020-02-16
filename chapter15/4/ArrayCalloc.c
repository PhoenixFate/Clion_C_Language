#include <stdlib.h>
#include<stdio.h>

void test1(){
    int i=0;
    int *p,*t;
    t=p=(int*)calloc(4, sizeof(int));
    for(i=0;i<4;i++){
        *p=i;
        printf("test1: %d\n",*p);
        p++;
    }
    free(t);
}

int main()
{
    test1();
	int* pArray;		/*定义指针*/
	int i;				/*循环控制变量*/
	pArray=(int*)calloc(3,sizeof(int));	/*数组内存*/

	for(i=1;i<4;i++)	/*使用循环对数组进行赋值*/
	{
		*pArray=10*i;	/*赋值*/
		printf("NO%d is: %d\n",i,*pArray);	/*显示结果*/
		pArray+=1;		/*移动指针到数组到下一个元素*/
	}
	return 0;
}