// #include <stdio.h>
  
// int main()
// {
//       int no;

//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     while (no >= 0) {
//        printf("%d ", no);
//        no--;  
//     }  
//     if (no == -1) {
//         printf("\n");
//      }

//      return 0;
// }

#include <stdio.h>
  
int main()
{
  int no;
 
  printf("请输入一个正整数：");
  scanf("%d", &no);
 
  while (no >= 1) {
    printf("%d ", no--);
  }    
  if (no == 0) {
    printf("\n");
  }                
 
  return 0;
}