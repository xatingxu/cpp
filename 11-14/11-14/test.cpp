//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//
//struct s
//{
//	int a;
//	int b;
//	bool operator==(const s& rhs);
//};
//
//bool s::operator==(const s& rhs)
//{
//	return ((a == rhs.a) && (b == rhs.b));
//}
//int main()
//{
//	struct s s1, s2;
//	s1.a = 1;
//	s1.b = 3;
//	s2.a = 1;
//	s2.b = 2;
//	if (s1 == s2)
//	{
//		cout << "两个结构体相等" << endl;
//	}
//	else
//	{
//		cout << "两个结构体不相等" << endl;
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	int i;
	int j;
	char k;
};
int main()
{
	//char str[20] = "hello world";
	//char* s = (char*)malloc(20);
	//strcpy(s, str);
	//printf("strlen(str)=%d\n", strlen(str));//11
	//printf("sizeof(str)=%d\n", sizeof(str));//20
	//printf("strlen(s)=%d\n", strlen(s));//11
	//printf("sizeof(s)=%d\n", sizeof(s));//4 sizeof(char*)=4;
	//free(s);



	//char* s = "0123456789";
	//printf("%d\n", strlen(s));//10  有十个字符
	////printf("%d\n", strlen(*s));//error
	//printf("%d\n", sizeof(s));//4  sizeof(指针）=4
	//printf("%d\n", sizeof(*s));//1  *s指的是字符串第一个字符


	//char s[] = "0123456789";
	//printf("%d\n", strlen(s));//10
	//printf("%d\n", sizeof(s));//11 s是一个数组，到‘\0’结束
	//printf("%d\n", sizeof(*s));//1 *s是第一个字符


	//char s[100] = "0123456789";
	//printf("%d\n", strlen(s));//10
	//printf("%d\n", sizeof(s));//100  s在内存中的大小，因为总共申请了100个内存。


	//int s[100] = { 0};
	//printf("%d\n", strlen(s));//error  strlen的参数只能是char*,且必须是以'\0\结尾。
	//printf("%d\n", sizeof(s));//400 100x4


	//char q[] = "abc";
	//char p[] = "a\n";
	//sizeof(q), sizeof(p), strlen(q), strlen(p);
	//printf("%d\n", strlen(q));//3
	//printf("%d\n", sizeof(q));//4
	//printf("%d\n", strlen(p));//2
	//printf("%d\n", sizeof(p));//3


	//char p[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	//char q[] = { 'a', 'b', 'c', 'd ','\0','e','f','g'};
	//printf("%d\n", strlen(q));//4
	//printf("%d\n", sizeof(q));//
	//printf("%d\n", strlen(p));//随机值，和编译器有关
	//printf("%d\n", sizeof(p));//8

	
	//Stu stu;
	//printf("%d\n", sizeof(Stu));  //结果 12  ＝＝＝》内存补齐
	//printf("%d\n", sizeof(stu));;  //结果 12  ＝＝＝》内存补齐 


	char str[100] = "abc";
	char str1[sizeof(str)];
	
	system("pause");
	return 0;
}