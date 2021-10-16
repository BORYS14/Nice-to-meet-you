#include<stdio.h>

int main()
{
    double x;
    
    printf("请输入一个实数。");
    scanf("%lf",&x); //用scanf读取double类型的值时需要使用格式字符串%lf  (是小写字母l)
    printf("您输入的数是%f。",x);

    return 0;
}