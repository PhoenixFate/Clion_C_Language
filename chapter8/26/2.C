#include<stdio.h>
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
	char string[50];
	int i=0,letter=0,dig=0,spa=0,other=0;
	printf("请输入一组字符串:\n");
	gets(string);
	while(string[i]!='\0')
	{
		if(string[i]>='A'&&string[i]<='Z'||string[i]>='a'&&string[i]<='z')
			letter++;
		else if(string[i]==' ')
			spa++;
		else if(string[i]>='0'&&string[i]<='9')
			dig++;
		else
			other++;
		i++;
	}
	printf("字符：%d\n数字：%d\n空格：%d\n其他字符：%d\n",letter,dig,spa,other);

    return 0;
}