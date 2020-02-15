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
	char s1[30],s2[30];
	int i=0;
	printf("请输入字符串1:\n");
	gets(s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("字符串2:\n");
	puts(s2);

	return 0;
}
