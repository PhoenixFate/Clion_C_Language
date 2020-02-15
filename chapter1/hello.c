#include"stdio.h"
#include<stdlib.h>
#include "../base/osplatformutil.h"

int main() {
#if defined I_OS_MAC
    printf("this is mac");
#elif defined I_OS_WIN32
    system("chcp 65001");
    printf("this is windows");
#elif defined I_OS_LINUX
    printf("this is linux");
#endif
    printf("中文");
    printf("Hello,world! I'm coming!\n");/*输出要显示的字符串*/
    return 0;    /*程序返回0*/
}