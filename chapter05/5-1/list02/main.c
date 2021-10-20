#include <stdio.h>

int main() 
{
    int i;
    int a[5] = {34,25,35,46,23};
    int b[5];

    for (i = 0; i < 5; i++) {
        b[i] = a[4-i];
    }
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\t",i,a[i]);
        printf("b[%d] = %d\n",i,b[i]);
    }

    return 0;
}