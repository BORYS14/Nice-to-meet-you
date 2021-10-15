#include <stdio.h>

int main()
{
    int a,b,x;
    int min,max;
    int sum = 0;

    printf("请输入两个整数："); scanf("%d %d",&a,&b);

    min = a<b?a:b;
    max = a>b?a:b;
    x = min;

    do {
        sum += x;
        x += 1;
    } while (min <= max);

    printf("大于等于%d小于等于%d间所有整数的和为%d。",min,max,sum);
    
}