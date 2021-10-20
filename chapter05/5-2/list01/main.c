#include <stdio.h>

int main()
{
    int tensu[6][2];
    int CHINESE=0,MATH=0; //各门课的总分
    int sum[6] = {0}; //各个学生的总分
    int i,j;

    printf("请输入学生的语文成绩：\n");

    for (i = 0; i < 6; i++) {
        scanf("%d",&tensu[i][0]);
        
    }
    
    printf("请输入学生的数学成绩：\n");

    for (i = 0; i < 6; i++) {
        scanf("%d",&tensu[i][1]);
        
    }

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 6; i++) {
            if (j == 0) {
                CHINESE += tensu[i][j];
            } else { 
                MATH += tensu[i][j];
            }
        }
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            sum[i] += tensu[i][j];
        }
    }
    
    printf("语文考试总分：%d\t数学考试总分:%d\n",CHINESE,MATH);
    printf("语文考试平均分：%.2f\t数学考试平均分:%.2f\n",CHINESE/6.0,MATH/6.0);


    for (i = 0; i < 6; i++) {
        printf("第%d个学生的总分：%d\t平均分：%.2f\n",i+1,sum[i],sum[i]/2.0);
    }

    return 0;
}