#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//if��֧���
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);     //��һ����Ҫ\n
//	if (age <= 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age > 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age > 30 && age < 60)
//	{
//		printf("׳��\n");
//	}
//	else
//	{
//		printf("����\n");
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
/*}*///else��ƥ�䣺else�Ǻ�����������ifƥ��ġ�
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

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	if (num1 % 2 == 0)
//	{
//		printf("����Ϊż��\n");
//	}
//	else
//	{
//		printf("����Ϊ����\n");
//	}
//	return 0;
//}

//���1-100��ż��
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

//switc��֧���
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
//		printf("������\n");
//	default:
//		printf("��ĩ\n");
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
//        {//switch����Ƕ��ʹ��
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
	}*///��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ�������ԣ�while�е�break������������ֹѭ���ġ�

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
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
/*}*///����Ĵ����ʵ����޸��ǿ�����������������.

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


//����׳�
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
//		sum = sum + n;//�ؼ�		
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



//�����������������
//int main()
//{
//	int num1 = 0;
//	int num2 =0;
//
//	for (num1 = 1; num1 <= 3; num1++)
//	{
//		printf("����������\n");
//		scanf("%d",&num2);
//		if (num2 == 123456)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��¼ʧ��\n");
//		}
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	char num2[7] = {0};//����6λ���룬��ֹ�ַ���һλ
//	for (num1 = 1; num1 <= 3; num1++)
//	{
//		printf("����������\n");
//		scanf("%s", &num2);
//		if (strcmp(num2, "123456") == 0)//�ȺŲ����ж������ַ�������ȣ���Ҫ��strcmp����
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		if (num1 == 3)
//		{
//			printf("��¼ʧ�ܣ����˳�����\n");
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n",mid);
//			break;
//		}		
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//�����������Ӵ�С����
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


//д��1-100������3�ı���������
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

//��������������������Լ��
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
//	printf("��Լ��Ϊ%d\n", num2);
//	return 0;
//}

//��ӡ100-200֮�������,�����������
// �Գ���
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
	printf("\n����%d������", num3);
	return 0;
}


