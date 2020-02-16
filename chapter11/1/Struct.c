#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../base/osplatformutil.h"
struct Product                /*声明结构*/
{
    char cName[10];            /*产品的名称*/
    char cShape[20];        /*形状*/
    char cColor[10];        /*颜色*/
    int iPrice;            /*价格*/
    char cArea[20];            /*产地*/
} ;

struct Product2 {
    char name[20];
    char shape[30];
    char color[20];
    double price;
    char area[100];
};

typedef struct Product2 Pro;


int main() {
#if defined I_OS_MAC
    printf("this is mac\n");
#elif defined I_OS_WIN32
    system("chcp 65001");
    printf("this is windows\n");
#elif defined I_OS_LINUX
    printf("this is linux\n");
#endif
    struct Product product1;            /*定义结构体变量*/
    struct Product2 product2;

    strcpy(product2.area, "小地方");
    strcpy(product2.name, "高达");
    strcpy(product2.shape, "椭圆");
    product2.price = 23.3;
    printf("name: %s; shape: %s; area: %s; price: %f; \n", product2.name, product2.shape, product2.area, product2.price);

    Pro product3;
    strcpy(product3.area, "小地方");
    strcpy(product3.name, "高达");
    strcpy(product3.shape, "椭圆");
    product3.price = 23.3;
    printf("name: %s; shape: %s; area: %s; price: %f; \n", product3.name, product3.shape, product3.area, product3.price);

    printf("please enter product's name\n");    /*信息提示*/
    scanf("%s", &product1.cName);    /*输出结构成员*/

    printf("please enter product's shape\n");/*信息提示*/
    scanf("%s", &product1.cShape);    /*输出结构成员*/

    printf("please enter product's color\n");/*信息提示*/
    scanf("%s", &product1.cColor);    /*输出结构成员*/

    printf("please enter product's price\n");/*信息提示*/
    scanf("%d", &product1.iPrice);    /*输出结构成员*/

    printf("please enter product's area\n");/*信息提示*/
    scanf("%s", &product1.cArea);    /*输出结构成员*/

    printf("Name: %s\n", product1.cName);    /*将成员变量输出*/
    printf("Shape: %s\n", product1.cShape);
    printf("Color: %s\n", product1.cColor);
    printf("Price: %d\n", product1.iPrice);
    printf("Area: %s\n", product1.cArea);

    return 0;
}