#include <stdio.h>
#define NUMBER 382

int main()
{
    int i,j;
    int num;
    int goal[NUMBER];
    int bunpu[11] = {0};
    int row,col;

    printf("请输入学生人数:");

    do {
        scanf("%d",&num);
        if (num < 1 || num > NUMBER) {
            printf("输入不符格式，请重新输入：");
        } 
    } while (num < 1 || num > NUMBER);

    for (i = 1; i <= num; i++) {
        printf("%2d号：",i);
        do {
            scanf("%d",&goal[i]);
            if (goal[i] < 0 || goal[i] > 100) {
                printf("输入不符格式，请重新输入：");
            }
        } while (goal[i] < 0 || goal[i] > 100);
        bunpu[goal[i]/10]++;        
    }
    
    row = bunpu[0];

    for (j = 1; j <= 10; j++) {
        if (row < bunpu[j]) {
            row = bunpu[j];
        }
    }

    for (; row > 0; row--) {
        for (j = 0; j < 11; j++) {
            if (bunpu[j] >= row) {
                printf("*  ");
            } else {
                printf("   ");
            }       
        }
        putchar('\n');
    }

    for (col = 0; col < 32; col++) {
        printf("-");
    }
    putchar('\n');

    for (col = 0; col <= 100; col+=10) {
        printf("%d ",col);
    }
}