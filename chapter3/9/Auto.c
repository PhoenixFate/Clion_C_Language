#include<stdio.h>
#include<stdlib.h>

void AddOne() {
    auto int iInt = 1;                /*定义整型变量*/
    iInt = iInt + 1;                    /*变量加1*/
    printf("%d\n", iInt);            /*显示结果*/
}

int main() {
    system("chcp 65001");
    printf("第一次调用：");            /*显示结果*/
    AddOne();                /*调用Show函数*/
    printf("第二次调用：");            /*显示结果*/
    AddOne();                /*调用Show函数*/
    return 0;            /*程序结束*/
}