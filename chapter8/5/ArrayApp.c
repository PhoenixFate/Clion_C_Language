#include<stdio.h>

int main()
{
	char* ArrayName[5];		/*字符指针数组*/
	int index;				/*循环控制变量*/
	ArrayName[0]="WangJiasheng";	/*为数组元素赋值*/
	ArrayName[1]="LiuWen";
	ArrayName[2]="SuYuqun";
	ArrayName[3]="LeiYu";
	ArrayName[4]="ZhangMeng";
	for(index=0;index<5;index++)	/*使用循环显示名称*/
	{
		printf("%s\n",ArrayName[index]);
	}

	char *names[]={
	        "name1",
	        "name2",
	        "name3",
	        "name4",
	        "name5",
	};
    printf("%llu\n", sizeof(names));
    printf("%llu\n", sizeof(names[0]));
    for(index=0;index<sizeof(names)/sizeof(names[0]);index++){
        printf("%s\n",names[index]);
    }

	
	return 0;
}