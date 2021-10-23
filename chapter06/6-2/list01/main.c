#include <stdio.h>

int scan_pint(void)
{
    int num;

    do {
        printf("请输入一个正整数：");
        scanf("%d",&num);
        if (num <= 0) {
            printf("请不要输入非正整数。");
        }
    } while (num <= 0);

    return num;
}

int rev_int(int nx)
{
    int i = 0;
    while (1) {
        i = i*10 + nx%10;
        nx /= 10;
        if (nx == 0) break;
    }

    return i;
}



int main(void)
{
    int nx = scan_pint();
    
    printf("该数倒序后的值为%d。",rev_int(nx));

    return 0;
}