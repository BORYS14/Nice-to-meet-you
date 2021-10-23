#include <stdio.h>
#define NUMBER 5

int max_of(int f[])     //提高函数的通用性
{
    int max;
    int i;

    max = f[0];

    for (i = 1; i < NUMBER; i++) {
        max = max > f[i] ? max : f[i];
    }
    
    return max;
}

int main(void)
{
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e,max_m;

    for (i = 0; i < NUMBER; i++) {
        printf("请输入%d号学生的成绩：\n",i+1);
        printf("[%d]数学：",i+1); scanf("%d",&mat[i]);
        printf("   英语："); scanf("%d",&eng[i]);
    }

    max_m = max_of(mat);  //调用方直接写下数组名，不用加下标[]
    max_e = max_of(eng);

    printf("数学的最高分是%d分。",max_m);
    printf("英语的最高分是%d分。",max_e);

    return 0;
}