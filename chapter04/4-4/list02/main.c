#include <stdio.h>

int main() 
{
    int row,col;
    int x,y;
    int num;

    num = 1;

    for (row = 0; row <= 9; row++) {
        if (row == 1) {
            for (x = 1; x <= 38; x++) {
                putchar('-');
            }
            putchar('\n');
        }
        if (row == 0) {
            printf("  |");
            for (y = 1; y <= 9; y++) {
                printf("%3d ",y);
            }         
        } else {
            printf("%d |",num);
            num++;
        }
        for (col = 1; col <= 9 && row >= 1; col++) {
            printf("%3d ",row*col);
        }
        putchar('\n');
    }   
}