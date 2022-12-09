//指针
#define _CRT_SECURE_NO_WARNINGS 1
//指针变量，用来存放地址的变量。（存放在指针中的值都被当成地址处理
//#include<stdio.h>
//int main()
//{
//	int a = 0 ;
//	int* b = &a;
//	printf("%p\n", b);
//	*b = 20;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));//本机运行的平台为64位
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	char* c = &a;
//	printf("%p\n", &a);
//	printf("%p\n", b);
//	printf("%p\n", c);
//	printf("%p\n", b+1);
//	printf("%p\n", c+1);
//	return 0;
//} 指针的类型决定了指针向前或者向后走一步有多大（距离）。
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;   //重点在调试的过程中观察内存的变化。
//	*pi = 0;   //重点在调试的过程中观察内存的变化。
//	return 0;
//}指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。

// 野指针
//#include <stdio.h>
//int main()
//{
//    int* p;//局部变量指针未初始化，默认为随机值
//    *p = 20;
//    return 0;
//}
/*#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int* b = a;
	for (int i = 0; i < 10; i++)
	{
		*b++ = i;
		printf("%d", a[i]);
	}
	return 0;
}*///指针越界访问
//指针指向的空间释放
// 
// 预防野指针的出现
//#include <stdio.h>
//int main()
//{
//    int* p = NULL;
//    //....
//    int a = 10;
//    p = &a;
//    if (p != NULL)
//    {
//        *p = 20;
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//
//int main()
//{
//	char a[] = "dasdasdsa";
//	int b = my_strlen(&a);
//	printf("%d\n", b);
//	printf("%d\n", strlen(a));
//	return 0;
//}//指数与指数的运算
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0,1,2 };
//	int* b = &a[0];
//	int* c = &a[1];
//	printf("%d\n", c - b);
//	printf("%p\n", c);
//	printf("%p\n", b);//十六进制数
//	printf("%d\n", sizeof(int));
//	return 0;
//}//指针与指针的相减是根据类型来的

//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
// 但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	int* vp = NULL;
//	int values[N_VALUES] = {0};
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;//不可行
//	}
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;//可行
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//用指针访问数组