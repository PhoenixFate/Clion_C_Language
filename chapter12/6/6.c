#include<stdio.h>
main()
{
	int x=30,y=-30;
	x=x>>3; 									/*x右移3位*/
	y=y>>3; 									/*y右移3位*/
	printf("the result1 is:%d,%d\n",x,y);
	x=x>>2; 									/*x右移2位*/
	y=y>>2; 									/*x右移2位*/
	printf("the result2 is:%d,%d\n",x,y);
}
