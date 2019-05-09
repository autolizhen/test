#include <stdio.h>

void swap(int &x, int &y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
  
   return;
}

int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
 
	printf("交换前，a 的值：%d\n",a);
	printf("交换前，b 的值：%d\n",b);

   /* 调用函数来交换值 */
   swap(a, b);
 
	printf("交换后，a 的值：%d\n",a);
	printf("交换后，b 的值：%d\n",b);
 
   return 0;
}





