#include <stdlib.h>
#include<stdio.h>

void test1() {
    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 200;
    printf("test1: *p: %d\n", *p);
    free(p);
}

int main() {
    test1();

    int *pInt;        /*定义整型指针*/
    pInt = (int *) malloc(sizeof(int));    /*分配内存*/

    *pInt = 100;        /*使用分配内存*/
    printf("the number is:%d\n", *pInt);    /*输出显示数值*/
    free(pInt);        /*释放内存*/
    return 0;
}