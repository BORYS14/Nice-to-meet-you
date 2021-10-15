#include <stdio.h>

int main() 
{
    int i,j,len;

    printf("请输入等腰三角形腰长："); scanf("%d",&len);

    for (i=1; i<=len; i++) {
        for ( j = 1; j<=i; j++) {
            putchar('*');
        }
        putchar('\n');      
    }

    return 0;    
}