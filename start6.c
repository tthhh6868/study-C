//操作符详解
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//算术操作符
//int main()
//{
//	int a = 10;
//	int b = 2;
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a % b);
//	printf("%d\n", a / b);
//	return 0;
//}
//int main()
//{
//	int a = -1;     //10000000000000000000000000000001
//	int b = 0;      //11111111111111111111111111111110
//	b = a <<2;      //11111111111111111111111111111111
//	printf("%d", b);//11111111111111111111111111111100
//	                //11111111111111111111111111111011
//	                //10000000000000000000000000000100
//	return 0;
//}//左移操作符：左边抛弃，右边补0.（在补码上面进行改动）
//int main()
//{
//	int a = -7;     //10000000000000000000000000000111
//	int b = 0;      //11111111111111111111111111111000
//	b = a >> 1;     //11111111111111111111111111111001
//	printf("%d", b);//11111111111111111111111111111100
//	return 0;      //11111111111111111111111111111011
//		            //10000000000000000000000000000100
//}//右移操作符：1. 逻辑移位
              //左边用0填充，右边丢弃
             //2. 算术移位
            //左边用原该值的符号位填充，右边丢弃(多采用这种)
//int main()
//{
//    int a = 2;    //00000000000000000000000000000010
//    int b = 3;    //00000000000000000000000000000011
//    int c = a & b;//00000000000000000000000000000010
//    printf("%d", c);
//    return 0;
//}//按位与（&）：将整数从十进制转化为二进制数，上下比较，有零则零 ，两个都是 1 才是 1。
//int main()
//{
//    int a = 2;    //00000000000000000000000000000010
//    int b = 3;    //00000000000000000000000000000011
//    int c = a | b;//00000000000000000000000000000011
//    printf("%d", c);
//    return 0;
//}//按位或（|）: 上下比较有 1 则为 1，两个都是 0 才是 0
//int main()
//{
//    int a = 2;    //00000000000000000000000000000010
//    int b = 3;    //00000000000000000000000000000011
//    int c = a ^ b;//00000000000000000000000000000001
//    printf("%d", c);
//    return 0;
//}//按位异或（^）:上下比较，相同为 0 ，相异为 1 
//两个数的交换
//使用临时变量
//int main()
//{
//    int a = 3;
//    int b = 5;
//    int tmp = 0;
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("%d,%d", a, b);
//    return 0;
//}
//未使用了临时变量
//int main()
//{
//    int a = 3;
//    int b = 5;
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("%d,%d",a, b);
//    return 0;
//}
//用按位异或的方法解决
//#include <stdio.h>
//int main()
//{
//    int a = 10;   //00000000000000000000000000001010
//    int b = 20;   //00000000000000000000000000010100
//    a = a ^ b;    //00000000000000000000000000011110
//    b = a ^ b;    //00000000000000000000000000001010  
//    a = a ^ b;    //00000000000000000000000000010100  
//    printf("a = %d b = %d\n", a, b);
//    return 0;
//}
//计算一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//    int a = 232;
//    int count = 0;
//    while (a)
//    {
//        if (a % 2 == 1)
//        {
//            count++;
//        }
//        a = a / 2;
//    }
//    printf("%d", count);
//    return 0;
//}
//int main()
//{
//    int a = 30;
//    int c = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        int b = 0;
//        b = a >> 1;
//        if (a != b);
//        {
//            c++;
//            a = b;
//        }
//    }
//    printf("%d", c);
//    return 0;
//}
// 运用了刚才所学内容，但是代码仍然不够优化，需要循环32次
//int main()
//{
//    int a = 20;
//    int b = 1;
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if (a & (1 << i))
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int num = 20;
//    int i = 0;
//    int count = 0;//计数
//    while (num)
//    {
//        count++;
//        num = num & (num - 1);
//    }
//    printf("二进制中1的个数 = %d\n", count);
//    return 0;
//}
//赋值符可以连续使用，但是不易调试，不建议
//int main()
//{
//    int a = 10;
//    int x = 0;
//    int y = 20;
//    a = x = y + 1;
//    printf("%d,%d,%d", a, x, y);
//    return 0;
//}
//单目操作符
//#include <stdio.h>
//int main()
//{
//    int a = -10;
//    int* p = NULL;
//    printf("%d\n", !2);
//    printf("%d\n", !0);
//    a = -a;
//    p = &a;
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof a);
//    printf("%d\n", sizeof(int));
//    return 0;
//}
//void test1(int arr[])
//{
//    printf("%d\n", sizeof(arr));//(2)//8
//}
//void test2(char ch[])
//{
//    printf("%d\n", sizeof(ch));//(4)//8
//}//数组传参传的是第一个元素的地址，64位平台指针大小为8字节
//int main()
//{
//    int arr[10] = { 0 };
//    char ch[10] = { 0 };
//    printf("%d\n", sizeof(arr));//(1)//40
//    printf("%d\n", sizeof(ch));//(3)//10
//    test1(arr);
//    test2(ch);
//    return 0;
//}
//逻辑操作符
//#include <stdio.h>
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//   // i = a++ && ++b && d++;
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
//360面试题，对于理解逻辑操作符很有用！！！