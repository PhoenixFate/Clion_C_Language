#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "../../base/osplatformutil.h"

int main() {
#if defined I_OS_MAC
    printf("this is mac\n");
#elif defined I_OS_WIN32
    system("chcp 65001");
    printf("this is windows\n");
#elif defined I_OS_LINUX
    printf("this is linux\n");
#endif
    char temp[] = "中午";
    printf("%s\n", temp);
    printf("%llu\n", sizeof(temp));

    char str1[30]={'\0'}, str2[30]={'\0'};
    printf("输入目的字符串:\n");
    scanf("%s",str1);                           /*输入目的字符*/
    printf("输入源字符串:\n");
    scanf("%s",str2);                          /*输入源字符串*/

    printf("输出目的字符串:\n");
    printf("%s\n", str1);                      /*输出目的字符*/
    printf("%llu\n", sizeof(str1));
    printf("输出源字符串:\n");
    printf("%s\n", str2);                           /*输出源字符串*/
    printf("%llu\n", sizeof(str2));
    strcpy(str1, str2);                                    /*调用strcpy函数实现字符串拷贝*/
    printf("调用strcpy函数进行字符串拷贝:\n");
    printf("拷贝字符串之后的目的字符串:\n");
    puts(str1);                                        /*输出拷贝后的目的字符串*/
    puts(str2);                                        /*输出拷贝后的源字符串*/

    return 0;                                            /*程序结束*/
}

