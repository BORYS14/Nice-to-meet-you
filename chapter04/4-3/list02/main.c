#include <stdio.h>

int main()
{
    int n,n1,x ;
    int sum = 0 ;

    printf("请输入一个正整数："); scanf("%d",&n);

    n1 = n;

    for (x = 0; x <= n; x++) {
        sum += x;
    }
    printf("从1加到%d的值为%d。\n",n1,sum);

    return 0;
}