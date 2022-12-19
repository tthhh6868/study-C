#define _CRT_SECURE_NO_WARNINGS 1
//结构体
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
}*///结构变量的成员是通过点操作符（.）访问的。点操作符接受两个操作数。
/*void print(struct stu* s1 )
{
	printf("%d\n", (*s1).age);
	printf("%s\n", s1->name);
}
int main()
{
	print(&s1);
	return 0;
}*///结构体指针访问指向变量的成员,有时候我们得到的不是一个结构体变量，而是指向一个结构体的指针。
//结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//	print2(&s); //传地址
//	return 0;
//}函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//所以结构体传参时首选传结构体的地址。