#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<float.h>

int main()
{
	//�ҵĵ�һ��C���Գ���
	printf("hello,world\n");
	return 0;
}


//int main()
//{
//	printf("float�洢������ֽ��� ��%lu \n", sizeof(float));
//	printf("float�����ֵ ��%E \n", FLT_MIN);
//	printf("float����Сֵ : %E \n", FLT_MAX);
//	return 0;
//}
// 
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum  = 0;
//	scanf("%d%d", &num1, &num2);/*scanf��C�����ṩ�ģ�scanf-s��vs�ṩ��*/
//	sum = num1 + num2;/*������Ҫ�п�ƽ̨��*/
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
char ch = 'a'; */           //�ַ�����Ҫ''������

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);   //%�������ã�һ��������ţ��������õ��ж�һ�����ǲ����ܱ���һ���������������������������������������еĸ�ʽ
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
//}					//ö�ٳ���������ʽ     //ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��



//int main()
//{     
//	//3.14;//���泣��
//	//6789;//���泣��
//	 
//	////const���εĳ�����
//	//const float abc = 3.14; //�����abc��const���εĳ����������ʻ��Ǹ�������
//	//abc = 6.14;//���ܸ���������ֵ
//
//	#define max 100////#define�ı�ʶ������ ��ʾ
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
//}      //�ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ������ݡ�




//ת���ַ�ʾ��

//#include <stdio.h>
//int main()
//{
//    printf("c:\code\test.c\n");
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    printf("hello world??!");//��߱��������಻ͬ��ֱ�Ӻ�������ĸ��
//    return 0;
//}




//int main()
//{
//	printf("\123\n");//  "\ddd"  ddd��ʾ1~3���˽��Ƶ�����
//	printf("\x27\n");//  "\xdd"  dd��ʾ2��ʮ����������
//	return 0;
//}


//������
//�������ʲô��
//#include<string.h>
//int main()
//{
//    printf("%d\n", strlen("abcdef"));
//    // \62��������һ��ת���ַ�(\ddd��ʾ�˽��ƣ�����8���ϲ�Ϊһ��ת���ַ�)
//    printf("%d\n", strlen("c:\test\628\test.c"));     //14
//    return 0;
//}



//
//int main()
//{
//	int day = 0;
//	printf("�����ѧϰ�𣿣�ѡ��1 or 0 ��:>");
//	scanf("%d", &day);
//	if(day == 1)
//	{
//		printf("���ͣ����ɹ��ģ���\n");
//	}
//	else
//	{
//		printf("��ȥ������\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("��ʼѧϰ\n");
//	int day = 0;
//	while (day <= 20000)
//	{
//		day++;
//		printf("����Ŭ��ѧϰ %d\n", day);
//	}
//	if (day > 20000)
//	{
//		printf("���������۷�\n");
//	}
//	return 0;
////}




//�������򻯴��룬���븴��

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
//	printf("������������\n");
//	scanf("%d%d", &a,&b);
//	c = add(a,b);
//	printf("z = %d", c);
//	return 0;
//}


//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//int arr[3] = { 1,2,3, };//;//����һ���������飬����10��Ԫ��
//int arr[10] = { 0 };
//�������10��Ԫ�أ��±�ķ�Χ��0-9

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
//}       //�����ʹ��




//  ~ �����ж�����λ�����֣�0���1��1���0
//a = 0000000000000000000000            �����Ƶ�һλ 0Ϊ����1Ϊ��
//b = ~a = 1111111111111111111111
//�������ڴ��д洢���ǲ���
//һ�������Ķ����Ʊ�ʾ��3�֣�ԭ�� ���� ����
//ԭ�����λ����һλ�����䣬����λ��λȡ����Ϊ ����
//��������Ƽ�1�����һλ+1����Ϊ����
//1000000000001�����룩
//1000000000000�����룩
//1111111111111��ԭ�룩



//int main()
//{
//	int a = 10;
//	int b = a++;   //����++����ʹ�ã���++  �ʴ�ʱb=10��a=11
//	int b = ++a;   //ǰ��++����++����ʹ�ã��ʴ�ʱa=11��b=11
//	return 0;
//}           //����--ͬ��


//int main()
//{
//	int a = (int)3.14;//(����)��ǿ������ת��
//	return 0;
//}



////��unsigned int ������Ϊuint_32, ����uint_32Ҳ��һ��������
//typedef unsigned int uint_32;
//int main()
//{
//    //�۲�num1��num2,������������������һ����
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
//		printf("����Ϊż��\n");
//	}
//	else
//	{
//		printf("����Ϊ����\n");
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
//	printf("�׳�=%d", n);
//	return 0;
//}
