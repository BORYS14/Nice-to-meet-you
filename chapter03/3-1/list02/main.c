#include<stdio.h>

int main()
{
    int no;

    printf("请输入一个整数:");
    scanf("%d",&no);

    if (no == 0)
       printf("该数为零。");
    else if (no > 0)
       printf("该数为正数。");
    // else if (no < 0)
    //    printf("该数为负数。");
    else
       printf("该数为负数。");
   
    return 0;
}