#include <stdio.h>

int main()
{
    int no,retry;

    do {
        printf("请输入一个整数：");scanf("%d",&no);
        if (no == 0) {
            printf("这个数是0。\n");
        } else if (no > 0) {
            printf("这个数是正数。\n");
        } else {
            printf("这个数是负数。\n");
        }
        printf("是否继续【Yes...1;No...0】:");
        scanf("%d",&retry);
    } while (retry == 1);
    
    return 0;
}