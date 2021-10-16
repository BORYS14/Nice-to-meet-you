#include<stdio.h>

int main()
{
    int x,y,z;

    printf("请输入x"); scanf("%d",&x);
    printf("请输入y"); scanf("%d",&y);

    z = (double)x/y*100;//类型转换,因为z是int型，所以结果取整

    printf("x是y的%d%%",z);
    
    return 0;
}