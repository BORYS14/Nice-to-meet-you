#include <stdio.h>

int main()
{
    int x,y;
    int digit = 0;

    printf("请输入一个正整数：");scanf("%d",&x);

    y = x;

    while (x > 0) {
        x /= 10;
        digit++;
    }
    printf("%d的位数是%d。",y,digit);

    return 0;
}