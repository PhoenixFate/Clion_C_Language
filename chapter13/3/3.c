#include<stdio.h>

#define NUM 50

int main() {
    int i = 0;
#if NUM > 50                                        /*判断NUM是否大于50*/
    i++;
#endif
#if NUM == 50
    i = i + 50;
#endif
#if NUM < 50
    i--;
#endif
    printf("Now i is:%d\n", i);
    return 0;
}
