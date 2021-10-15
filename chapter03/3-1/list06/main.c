// #include <stdio.h>

// int main()
// {
//     int a,b,c,d,x;

//     printf("请输入四个整数"); scanf("%d %d %d %d",&a,&b,&c,&d);

//     if (a<b) {
//         x = a; a = b; b = x;
//     }
//     if (b<c) {
//         x = b; b = c; c = x;
//     }
//     if (c<d) {
//         x = c; c = d; d = x;
//     }
//     if (a<b) {
//         x = a; a = b; b = x;
//     }
//     if (b<c) {
//         x = b; b = c; c = x;
//     }
//     if (a<b) {
//         x = a; a = b; b = x;
//     }
    
//     printf("%d %d %d %d",a,b,c,d);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int a,b,c,d,x;

    printf("请输入四个整数"); scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>b) {
        x = a; a = b; b = x;
    }
    if (b>c) {
        x = b; b = c; c = x;
    }
    if (c>d) {
        x = c; c = d; d = x;
    }
    if (a>b) {
        x = a; a = b; b = x;
    }
    if (b>c) {
        x = b; b = c; c = x;
    }
    if (a>b) {
        x = a; a = b; b = x;
    }
    
    printf("%d %d %d %d",a,b,c,d);

    return 0;
}