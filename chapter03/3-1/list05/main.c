#include <stdio.h>
 
int main()
{
    int a,b,c;

    printf("请输入第一个整数："); scanf("%d",&a);
    printf("请输入第二个整数："); scanf("%d",&b);
    printf("请输入第三个整数："); scanf("%d",&c);

    int min;

    min = (a<b)?a:b;
    min = (min<c)?min:c;

    printf("最小的整数是%d",min);
    
	return 0;
}
