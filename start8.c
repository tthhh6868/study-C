#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
//#include<stdio.h>
//struct stu
//{
//	int age;
//	char num;
//	char name;
//}s1={12,'1','h'};
//int main()
//{
//	 //struct stu s1 = { 12,'21','h' };
//	printf("%c", s1.name);
//	return 0;
//}
//#include<stdio.h>
//struct stu1
//{
//	int age1;
//	int age2;
//};
//struct stu
//{
//	int age;
//	char num[10];
//	struct stu1;
//}s={20,"12312412",{12,2}};
//int main()
//{
//	printf("%d", s.age1);
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	int age;
//	char num[10] ;
//};
//int main()
//{
//	struct stu s1;
//	s1.age=12;
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	int age;
//	char name[10];
//};
//int main()
//{
//	/*struct stu id2 = 
//	{
//	id2.age = 1,
//	.name = "hello",
//	};*/
//	struct stu s1 =
//	{
//		.age = 12,
//		s1.name[10] = "asd"
//	};
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	int age;
//	char name[10];
//}s1={12,"zhangsan"};
/*int main()
{
	printf("%d", s1.age);
	return 0;
}*///�ṹ�����ĳ�Ա��ͨ�����������.�����ʵġ������������������������
/*void print(struct stu* s1 )
{
	printf("%d\n", (*s1).age);
	printf("%s\n", s1->name);
}
int main()
{
	print(&s1);
	return 0;
}*///�ṹ��ָ�����ָ������ĳ�Ա,��ʱ�����ǵõ��Ĳ���һ���ṹ�����������ָ��һ���ṹ���ָ�롣
//�ṹ�崫��
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//���Խṹ�崫��ʱ��ѡ���ṹ��ĵ�ַ��