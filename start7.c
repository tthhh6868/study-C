//ָ��
#define _CRT_SECURE_NO_WARNINGS 1
//ָ�������������ŵ�ַ�ı������������ָ���е�ֵ�������ɵ�ַ����
//#include<stdio.h>
//int main()
//{
//	int a = 0 ;
//	int* b = &a;
//	printf("%p\n", b);
//	*b = 20;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));//�������е�ƽ̨Ϊ64λ
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
//} ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩��
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	return 0;
//}ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޣ��ܲ��������ֽڣ���

// Ұָ��
//#include <stdio.h>
//int main()
//{
//    int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
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
}*///ָ��Խ�����
//ָ��ָ��Ŀռ��ͷ�
// 
// Ԥ��Ұָ��ĳ���
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
//}//ָ����ָ��������
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0,1,2 };
//	int* b = &a[0];
//	int* c = &a[1];
//	printf("%d\n", c - b);
//	printf("%p\n", c);
//	printf("%p\n", b);//ʮ��������
//	printf("%d\n", sizeof(int));
//	return 0;
//}//ָ����ָ�������Ǹ�����������

//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
// ���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	int* vp = NULL;
//	int values[N_VALUES] = {0};
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;//������
//	}
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;//����
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//��ָ���������