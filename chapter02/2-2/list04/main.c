#include<stdio.h>

int main()
{
    double height,weight,x,y;

    printf("请输入您的身高（cm):"); 
    scanf("%lf",&height);//scanf获取double型数据需要在%后加小写字母l
    weight = (height-100)*0.9;
    printf("您的体重是%.1fkg。\n",weight);
//     x = (double)5;
//     y = 5;
//     printf("%f%f",x,y);
    return 0;
}
    