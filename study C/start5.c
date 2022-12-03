//数组的学习
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = {1,2,3,4,5};
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//}
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };//数组的不完全初始化
//    //计算数组的元素个数
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//    int i = 0;//做下标
//    printf("%d\n", sz);
//    for (i = 0; i < 10; i++)//这里写10，好不好？
//    {
//        arr[i] = i;
//    }
//    //输出数组的内容
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char num[] = "abcdef";
//	printf("sizeof=%d\n", sizeof(num));//7
//	printf("strlen=%d\n", strlen(num));//6
//	return 0;
//}//strlen是求字符串长度的-只能针对字符串求长度-库函数
//sizeof计算变量，数组，类型的大小-单位是字节-操作符
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char num[] = { 'a','b','c' };
//	printf("sizeof=%d\n", sizeof(num));
//	printf("strlen=%d\n", strlen(num));//生成随机数，strlen函数在遇到\0时停止
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double num[10];
//	int sz = sizeof(num) / sizeof(num[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("num[%d]的地址为%p\n", i, &num[i]);
//	}
//	return 0;
//}//数组在内存中是连续存放的。
//二维数组的创建和初始化
//#include<stdio.h>
//int main()
//{
//	int num[2][3]={123};
//	int num1[2][4] = { {1,2},{1,2} };
//	int num2[][2] = { 1,2,3 };
//	int num3[3][] = { 1,2,3 };//行可以省略，但列不能省略
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int num[3][3] = {0};
//	for (a = 0; a < 3; a++)
//	{
//		for (b = 0; b < 3; b++)
//		{
//
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}
//输出二维数组
#include<stdio.h>
int main()
{
	int num[3][4] = { {1,2,3},{1,2,3,4} };
	int a = 0, b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++)
		{
			printf("%d  ", num[a][b]);
			printf("%p  ", &num[a][b]);
		}
		printf("\n");
	}
	return 0;
}