#include <stdio.h>

int main()
{
    int a,b,c,d;

    printf("请输入第一个整数："); scanf("%d",&a);
    printf("请输入第二个整数："); scanf("%d",&b);
    printf("请输入第三个整数："); scanf("%d",&c);
    printf("请输入第四个整数："); scanf("%d",&d);

    int max = a;
    if (max<b) max = b;
    if (max<c) max = c;
    if (max<d) max = d;
    
    printf("最大的数是%d。",max);

    return 0;
}