#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//if分支语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);     //不一定需要\n
//	if (age <= 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age > 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age > 30 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	return 0;
//}



//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
/*}*///else的匹配：else是和它离的最近的if匹配的。
//
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	if (num1 % 2 == 0)
//	{
//		printf("此数为偶数\n");
//	}
//	else
//	{
//		printf("此数为奇数\n");
//	}
//	return 0;
//}

//输出1-100的偶数
//int main()
//{
//	int num1 = 0;
//	for (num1 = 1; num1 <= 100; num1++)
//	{
//		if (num1 % 2 == 0)
//		{
//			printf("%d\n", num1);
//		}
//		else{}
//	}
//
//	return 0;
//}

//switc分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//	default:
//		printf("周末\n");
//	break;
//	}
//	return 0;
//}
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}//n=3 m=5

/*int main()
{
	int num1 = 0;
	while (num1 <= 10)
	{
		printf("%d\n", num1);
		num1++;
		if (num1 == 5)
			break;
	}
	return 0;
	}*///其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。所以：while中的break是用于永久终止循环的。

//int main()
//{
//	int num1 = 0;
//	while (num1 <= 10)
//	{
//		if (num1 == 5)
//			continue;
//		printf("%d\n", num1);
//		num1++;
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
/*}*///这里的代码适当的修改是可以用来清理缓冲区的.

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0'|| ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//计算阶乘
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 1;
//	scanf("%d", &num1);
//	for(num2=1;num2 <= num1;num2++)
//	{
//		num3 = num3 * num2;
//	}
//	printf("%d\n", num3);
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int num4 = 0;
//	for (num1 = 1; num1 <= 3; num1++)
//	{
//		 
//		for (num2 = 1; num2 <= num1; num2++)
//		{	
//			num3 = 1;
//			num3 = num3 * num2;
//			num4 = num4 + num3;
//		}
//	}
//	printf("%d\n", num4);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int sum = 0;
//	while (i <= 3)
//	{
//		n = n * i;
//		printf("%d!=%d\n", i, n);
//		i = i++;
//		sum = sum + n;//关键		
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 0;
//	int num3 = 1;
//	int num4 = 0;
//	while (num1 <= 3)
//	{
//		num3 = 1;
//
//		for (num2 = 1; num2 <= num1; num2++)
//		{	
//			
//			num3 = num3 * num2;
//		}
//		num4 = num4 + num3;
//		num1++;
//	}
//	printf("%d\n", num4);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char num1[] = "welcome to C";
//	char num2[] = "************";
//	int left = 0;
//	int right = strlen(num1) - 1;
//	printf("%S\n", num1);
//	for (left = 0, right = strlen(num1) - 1;
//		left <= right;
//		left++, right--)
//	{
//		num1[left] = num2[left];
//		num1[right] = num2[right];
//		printf("%s\n", num1);
//	}
//	return 0;
//}



//纯数字密码输入程序
//int main()
//{
//	int num1 = 0;
//	int num2 =0;
//
//	for (num1 = 1; num1 <= 3; num1++)
//	{
//		printf("请输入密码\n");
//		scanf("%d",&num2);
//		if (num2 == 123456)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("登录失败\n");
//		}
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	char num2[7] = {0};//输入6位密码，终止字符算一位
//	for (num1 = 1; num1 <= 3; num1++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", &num2);
//		if (strcmp(num2, "123456") == 0)//等号不能判断两个字符串的相等，需要用strcmp函数
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		if (num1 == 3)
//		{
//			printf("登录失败，请退出程序\n");
//		}
//	}
//	
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	for (left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
//		left <= right;)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n",mid);
//			break;
//		}		
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//输入三个数从大到小排列
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int a = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	if (num1 < num2)
//	{
//		a = num1;
//		num1 = num2;
//		num2 = a;
//	}
//	if (num1 < num3)
//	{
//		a = num1;
//		num1 = num3;
//		num3 = a;
//	}
//	if (num2 < num3)
//	{
//		a = num2;
//		num2 = num3;
//		num3 = a;
//	}
//		printf("%d%d%d", num1, num2, num3);
//	return 0;
//}


//写出1-100中所有3的倍数的数字
//int main()
//{
//	int num1 = 0;
//	for (num1 = 1; num1 <= 100; num1++)
//	{
//		if (num1 % 3 == 0)
//		{
//			printf("%d\n", num1);
//		}
//		else{}
//	}
//	return 0;
//}

//输入两个数，算出其最大公约数
//int main()
//{	
//	int num1 = 0;
//	int num2 = 0;
//	int a = 0;
//	scanf("%d%d", &num1, &num2);
//	while (a = num1 % num2)
//	{
//		num1 = num2;
//		num2 = a;
//	}
//	printf("公约数为%d\n", num2);
//	return 0;
//}

//打印100-200之间的素数,并计算出数量
// 试除法
#include<math.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	for (num1 = 100; num1 <= 200; num1++)
	{

		for (num2 = 2; num2 <= sqrt(num1); num2++)
		{
			if (num1 % num2 == 0)
			{
				break;
			}
		}
		if (num2 >sqrt(num1))
		{
			num3++;
			printf("%d\n", num1);
		}
	}
	printf("\n共有%d个素数", num3);
	return 0;
}


