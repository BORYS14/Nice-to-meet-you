#include <stdio.h>
#define Number 8

int main()
{
    int x[Number];
    int i;

    for (i = 0; i < Number; i++) {
        printf("x[%d]:",i); scanf("%d",&x[i]);
    }

    
    for (i = 0; i < Number/2; i++) {
        int y = x[i];
        x[i] = x[Number-1-i];
        x[Number-1-i] = y;
    }
    
    

    puts("倒序后是：");

    for ( i = 0; i < Number; i++) {
        printf("x[%d]:%d\n",i,x[i]);
    }
    
    return 0;
}