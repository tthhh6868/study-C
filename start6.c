//���������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������
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
//}//���Ʋ�����������������ұ߲�0.���ڲ���������иĶ���
//int main()
//{
//	int a = -7;     //10000000000000000000000000000111
//	int b = 0;      //11111111111111111111111111111000
//	b = a >> 1;     //11111111111111111111111111111001
//	printf("%d", b);//11111111111111111111111111111100
//	return 0;      //11111111111111111111111111111011
//		            //10000000000000000000000000000100
//}//���Ʋ�������1. �߼���λ
              //�����0��䣬�ұ߶���
             //2. ������λ
            //�����ԭ��ֵ�ķ���λ��䣬�ұ߶���(���������)
//int main()
//{
//    int a = 2;    //00000000000000000000000000000010
//    int b = 3;    //00000000000000000000000000000011
//    int c = a & b;//00000000000000000000000000000010
//    printf("%d", c);
//    return 0;
//}//��λ�루&������������ʮ����ת��Ϊ�������������±Ƚϣ��������� ���������� 1 ���� 1��
//int main()
//{
//    int a = 2;    //00000000000000000000000000000010
//    int b = 3;    //00000000000000000000000000000011
//    int c = a | b;//00000000000000000000000000000011
//    printf("%d", c);
//    return 0;
//}//��λ��|��: ���±Ƚ��� 1 ��Ϊ 1���������� 0 ���� 0
//int main()
//{
//    int a = 2;    //00000000000000000000000000000010
//    int b = 3;    //00000000000000000000000000000011
//    int c = a ^ b;//00000000000000000000000000000001
//    printf("%d", c);
//    return 0;
//}//��λ���^��:���±Ƚϣ���ͬΪ 0 ������Ϊ 1 
//�������Ľ���
//ʹ����ʱ����
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
//δʹ������ʱ����
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
//�ð�λ���ķ������
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
//����һ�������洢���ڴ��еĶ�������1�ĸ�����
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
// �����˸ղ���ѧ���ݣ����Ǵ�����Ȼ�����Ż�����Ҫѭ��32��
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
//    int count = 0;//����
//    while (num)
//    {
//        count++;
//        num = num & (num - 1);
//    }
//    printf("��������1�ĸ��� = %d\n", count);
//    return 0;
//}
//��ֵ����������ʹ�ã����ǲ��׵��ԣ�������
//int main()
//{
//    int a = 10;
//    int x = 0;
//    int y = 20;
//    a = x = y + 1;
//    printf("%d,%d,%d", a, x, y);
//    return 0;
//}
//��Ŀ������
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
//}//���鴫�δ����ǵ�һ��Ԫ�صĵ�ַ��64λƽָ̨���СΪ8�ֽ�
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
//�߼�������
//#include <stdio.h>
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//   // i = a++ && ++b && d++;
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
//360�����⣬���������߼������������ã�����