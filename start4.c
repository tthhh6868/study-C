//������ѧϰ
#define _CRT_SECURE_NO_WARNINGS 1
//������վ��Դ����ѧϰ��������
/* strcpy example */
#include <stdio.h>
#include <string.h>
/*int main()
{
	char str1[] = "Sample string";
	char str2[20]="*****************";
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}*///���ݵ����Լ�ʵ���֪��strcpy�����Ḵ��\0����Ŀ���ַ�������ֹ��ȡ

/* memset example */
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}
//int main()
//{
//	char str1[] = "&&&&&&&&";
//	memset(str1, 97, 2);
//	printf("%s\n", str1);
//	return 0;
//}
// �����е�һЩС̽��
//#include<stdio.h>
//int main()
//{
//	printf("%d", 'ab');//
//	return 0;
//}
//int max(int num1, int num2)
//{
//	if (num1 < num2)
//	{
//		return num2;
//	}
//	else
//	{
//		return num1;
//	}
//}
//int max(int x, int y)
//{
//	return (x > y) ? (x) : (y);//��Ϥһ������д��
//}
//int main()
//{
//	int a, b,c;
//	scanf("%d,%d",&a,&b);
//	c=max(a, b);
//	printf("%d", c);
//	return 0;
//}
//�޷��ﵽЧ���ĺ�������ֵ����//�β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ������
//void cha(int x, int y)
//{
//	int num;
//	num = x;
//	x = y;
//	y = num;
//}
//��Ч�ĺ�������ַ����
//void cha(int* x,int* y)
//{
//	int num;
//	num = *x;
//	*x = *y;
//	*y = num;
//}
//int main()
//{
//	int a, b;
//	a = 10;
//	b = 20;
//	cha(&a,&b);
//	printf("%d,%d", a, b);
//	return 0;
//}
// дһ�����������ж�һ�����ǲ���������
//#include<math.h>
//int prime_num(int x)
//{
//	int y;
//	if (x == 1)
//	{
//		return 1;
//	}
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	b = prime_num(a);
//	if (b == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//void add(int* x)
//{
//	(*x)++;
//}
//
//int main()
//{
//	int b = 0;
//	add(&b);
//	printf("%d\n", b);
//	add(&b); 
//	add(&b);
//	printf("%d\n", b);
//	add(&b);
//	printf("%d\n", b);
//	return 0;
//}
//��������Ƕ�׵��ã����ǲ���Ƕ�׶��塣
//void myself_prf()
//{
//	printf("tthhh\n");
//}
//void three_line()
//{
//	int num;
//	for (num = 0; num < 3; num++)
//	{
//		myself_prf();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//
//void myself_prf()
//{
//	printf("tthhh\n");
//	myself_prf();
//}
//
//int main()
//{
//	myself_prf();
//	return 0;
//}
//��ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//��ӡ�䷵��ֵ
//	return 0;
//}
//void print(int x)
//{
//	if (x < 10)
//	{
//		printf("%d ", x);
//
//	}
//	else
//	{
//		printf("%d ", x % 10);
//		print(x / 10);
//	}
//}
//int main()
//{
//	int num ;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int x)
//{
//	if (x >= 10)
//	{
//		print(x / 10);
//	}
//
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int num ;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//��������ʱ���������ַ����ĳ���
//1.��������ʱ������д��
//int myself_strlen(char* x)
//{
//	int b=0;
//	while(*x != '\0')
//	{
//		b++;
//		x++;
//	}
//	return b;
//}
//
//int main()
//{
//	int a=0;
//	char str1[]="tthhh";
//	a=myself_strlen(str1);
//	printf("%d\n", a);
//	return 0;
//}
//��������ʱ������д��
//int myself_strlen(char* x)
//{
//	if (*x != '\0')
//	{
//		return (1 + myself_strlen(x + 1));
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char str1[] = "tthhh";
//	int a=myself_strlen(str1);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", a);
//	return 0;
//}
//��n�Ľ׳ˡ��������������
//int factorial(int x)
//{
//	if (x != 1)
//	{
//		return (x * factorial(x - 1));
//	}
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", factorial(a));
//	return 0;
//}
 
//��n��쳲����������������������
/*int count = 0;
int num(int x)
{
	if (x == 3)
	{
		count++;
	}
	if (x < 3)
	{
		return 1;
	}
	else
	{
		return (num(x-1) + num(x -2));
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n%d\n", num(a),count);
	return 0;
}*///���ֳ���д��ʮ�ַ��ӣ����̺ܷ��������Ҷ���ظ����õ���
//�����õݹ�ķ�����д����
//int num(int x)
//{	
//	int y = 1;
//	int z = 1;
//	int r = 0;
//	int c = 0;
//	if (x < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		while (c<(x-2))
//		{
//			r = y;
//			y += z;
//			z = r;
//			c++;
//		}
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", num(a));
//	return 0;
//}
#include<stdio.h>
int ways(int x)
{
	int a = 1, b = 2, c = 0, d = 0;

	if (x == 1)
	{
		return 1;
	}
	if (x == 2)
	{
		return 2;
	}
	while (d < (x - 2))
	{
		c = b;
		b += a;
		a = c;
		d++;
	}
	return b;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("�ܹ���%d������\n", ways(n));
	return 0;
}