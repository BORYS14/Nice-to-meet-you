#include<stdio.h>

int main()
{
    int x,y;
    double z;

    printf("请输入x"); scanf("%d",&x);
    printf("请输入y"); scanf("%d",&y);

    z = (double)x/y*100;//类型转换

    printf("x是y的%f%%",z);
    
    return 0;
}