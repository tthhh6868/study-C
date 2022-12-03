#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<float.h>

int main()
{
	//我的第一个C语言程序
	printf("hello,world\n");
	return 0;
}


//int main()
//{
//	printf("float存储的最大字节数 ：%lu \n", sizeof(float));
//	printf("float的最大值 ：%E \n", FLT_MIN);
//	printf("float的最小值 : %E \n", FLT_MAX);
//	return 0;
//}
// 
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum  = 0;
//	scanf("%d%d", &num1, &num2);/*scanf是C语言提供的，scanf-s是vs提供的*/
//	sum = num1 + num2;/*编码需要有跨平台性*/
//		printf("sum=%d\n", sum);
//
//	return 0;
//}
// 
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));1
//	printf("%d\n", sizeof(short));2
//	printf("%d\n", sizeof(int));4
//	printf("%d\n", sizeof(long));4
//	printf("%d\n", sizeof(long long));8
//	printf("%d\n", sizeof(float));4
//	printf("%d\n", sizeof(double));8
//	printf("%d\n", sizeof(long double));8
//	return 0;
//}
/*int weight = 180;
char ch = 'a'; */           //字符串需要''括起来

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);   //%两种作用；一是求余符号，经常会用到判断一个数是不是能被另一个整除。二是引导符，用于引导输入输出项表列的格式
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	enum colour 
//	{
//		red,
//		blue,
//		yellow,
//	};
//	printf("%d\n", red);
//	printf("%d\n", blue);
//	printf("%d\n", yellow);
//
//	return 0;
//}					//枚举常量基本格式     //注：枚举常量的默认是从0开始，依次向下递增1的



//int main()
//{     
//	//3.14;//字面常量
//	//6789;//字面常量
//	 
//	////const修饰的常变量
//	//const float abc = 3.14; //这里的abc是const修饰的常变量（本质还是个变量）
//	//abc = 6.14;//不能给常变量赋值
//
//	#define max 100////#define的标识符常量 演示
//	printf("%d\n", max);
//
//	return 0;
//}



//int main()
//{
//	char arr1[] =  "abc";
//	char arr2 [] = {'a','b','c'};
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}      //字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。




//转义字符示范

//#include <stdio.h>
//int main()
//{
//    printf("c:\code\test.c\n");
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    printf("hello world??!");//这边编译器种类不同，直接忽略三字母词
//    return 0;
//}




//int main()
//{
//	printf("\123\n");//  "\ddd"  ddd表示1~3个八进制的数字
//	printf("\x27\n");//  "\xdd"  dd表示2个十六进制数字
//	return 0;
//}


//面试题
//程序输出什么？
//#include<string.h>
//int main()
//{
//    printf("%d\n", strlen("abcdef"));
//    // \62被解析成一个转义字符(\ddd表示八进制，超过8不合并为一个转义字符)
//    printf("%d\n", strlen("c:\test\628\test.c"));     //14
//    return 0;
//}



//
//int main()
//{
//	int day = 0;
//	printf("你会坚持学习吗？（选择：1 or 0 ）:>");
//	scanf("%d", &day);
//	if(day == 1)
//	{
//		printf("加油！你会成功的！！\n");
//	}
//	else
//	{
//		printf("滚去卖红薯！\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("开始学习\n");
//	int day = 0;
//	while (day <= 20000)
//	{
//		day++;
//		printf("继续努力学习 %d\n", day);
//	}
//	if (day > 20000)
//	{
//		printf("走上人生巅峰\n");
//	}
//	return 0;
////}




//函数：简化代码，代码复用

//int add(int a, int b)
//{
//	int z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入两个整数\n");
//	scanf("%d%d", &a,&b);
//	c = add(a,b);
//	printf("z = %d", c);
//	return 0;
//}


//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//int arr[3] = { 1,2,3, };//;//定义一个整形数组，最多放10个元素
//int arr[10] = { 0 };
//如果数组10个元素，下标的范围是0-9

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}       //数组的使用




//  ~ 把所有二进制位中数字，0变成1，1变成0
//a = 0000000000000000000000            二进制第一位 0为正，1为负
//b = ~a = 1111111111111111111111
//整数在内存中存储的是补码
//一个整数的二进制表示有3种：原码 补码 反码
//原码符号位（第一位）不变，其他位按位取反变为 反码
//反码二进制加1（最后一位+1）变为补码
//1000000000001（补码）
//1000000000000（反码）
//1111111111111（原码）



//int main()
//{
//	int a = 10;
//	int b = a++;   //后置++，先使用，后++  故此时b=10，a=11
//	int b = ++a;   //前置++，先++，后使用，故此时a=11，b=11
//	return 0;
//}           //后置--同理


//int main()
//{
//	int a = (int)3.14;//(类型)：强制类型转换
//	return 0;
//}



////将unsigned int 重命名为uint_32, 所以uint_32也是一个类型名
//typedef unsigned int uint_32;
//int main()
//{
//    //观察num1和num2,这两个变量的类型是一样的
//    unsigned int num1 = 0;
//    uint_32 num2 = 0;
//    return 0;
//}


//int main()
//{
//	int num1 = 0;
//	scanf("%d\n", &num1);
//	if (0 == num1 %2)
//	{
//		printf("数字为偶数\n");
//	}
//	else
//	{
//		printf("数字为奇数\n");
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0 ; i < 10 ; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 1;
//	for (num1 = 1; num1 < 9; num1++)
//	{
//		 num2 = num2 * num1;
//	}
//	printf("%d\n", num2);
//
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int n = 1;
//	scanf("%d", &num2);
//	for (num1 = 1; num1 <= num2; num1++)
//	{
//		n = num1 * n;
//	}
//	printf("阶乘=%d", n);
//	return 0;
//}
