#include <stdio.h>

int main()
{
    int i;
    int x[5];

    for (i = 0; i <= 4; i++) {
        x[i] = 5 - i;
    }
    for (i = 0; i <= 4; i++) {
        printf("x[%d] = %d\n",i,x[i]);
    }

    return 0;
}