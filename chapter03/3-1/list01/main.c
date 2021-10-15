#include<stdio.h>

int main()
{
    int a,b;
    
    printf("请输入第一个数：");scanf("%d",&a);
    printf("请输入第二个数：");scanf("%d",&b);
    
    if (a%b)
       puts("b不是a的约数");
    else
       puts("b是a的约数");
       
    return 0;
}