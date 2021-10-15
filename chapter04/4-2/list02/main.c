#include <stdio.h>

int main()
{
    int x=0;
    do {
        x++;
    } while (x<5);
    while (x>0) {
        printf("%d ",--x);
    }
}   