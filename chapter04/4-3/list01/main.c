#include <stdio.h>

int main(){
    int x,y;
    int n = 1;

    printf("请输入循环次数："); scanf("%d",&x);

    for (y = 0; y < x; y++) {
        if (n <= 9) {
            printf("%d",n);
            n += 1;
        } else {
            n = 0;
            printf("%d",n);
            n = 1;
        }
    }
    return 0;
}


// #include <stdio.h>
 
// int main(void)
// {
//     int no;
//     int i;
//     printf("请输入一个整数:");
//     scanf("%d", &no);
//     for (i = 1; i <=no; i++) {
//         printf("%d",i%10);   

//    }
     
// }