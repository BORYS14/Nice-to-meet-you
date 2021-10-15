// #include <stdio.h>

// int main()
// {
//     int x;

//     printf("请输入一个整数："); scanf("%d",&x);

//     switch (x%2)
//     {
//     case 0: printf("这个数是个偶数。"); break;  //标签    case和0之间要有空格
//     default: printf("这个数是个奇数。"); break;         //0和:之间可以没有空格
//     }
                               //在switch语句中，break语句执行后跳出switch语句，
//     return 0;               //如果没有break语句，则进入下一个语句。
// }

#include <stdio.h>
int main()
{
	int month;					

	printf("请输入月份：");scanf("%d", &month);
	switch (month)
	{
		case 3:case 4:case 5: printf("%d月是春天。\n", month); break;
		case 6:case 7:case 8: printf("%d月是夏天。\n", month); break;
		case 9:case 10:case 11: printf("%d月是秋天。\n", month); break;
		case 12:case 1:case 2: printf("%d月是冬天。\n", month); break;
        default:printf("没有这个月份！");
	}
	return 0;
}
