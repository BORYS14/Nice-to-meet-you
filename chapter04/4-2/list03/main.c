#include <stdio.h>

int main()
{
    int x;
    int y = 0;

    printf("请输入循环次数："); scanf("%d",&x);

    while (y < x) {
        if (y%2 == 0) {
            putchar('+');
        } else {
            putchar('-');
        }
        y++;
    }
    
    return 0;
}