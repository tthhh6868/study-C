//�����ѧϰ
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
//    int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
//    //���������Ԫ�ظ���
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
//    int i = 0;//���±�
//    printf("%d\n", sz);
//    for (i = 0; i < 10; i++)//����д10���ò��ã�
//    {
//        arr[i] = i;
//    }
//    //������������
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
//}//strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��
//sizeof������������飬���͵Ĵ�С-��λ���ֽ�-������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char num[] = { 'a','b','c' };
//	printf("sizeof=%d\n", sizeof(num));
//	printf("strlen=%d\n", strlen(num));//�����������strlen����������\0ʱֹͣ
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double num[10];
//	int sz = sizeof(num) / sizeof(num[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("num[%d]�ĵ�ַΪ%p\n", i, &num[i]);
//	}
//	return 0;
//}//�������ڴ�����������ŵġ�
//��ά����Ĵ����ͳ�ʼ��
//#include<stdio.h>
//int main()
//{
//	int num[2][3]={123};
//	int num1[2][4] = { {1,2},{1,2} };
//	int num2[][2] = { 1,2,3 };
//	int num3[3][] = { 1,2,3 };//�п���ʡ�ԣ����в���ʡ��
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
//�����ά����
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