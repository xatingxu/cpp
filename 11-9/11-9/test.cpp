//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class A{
//public:
//	A(char* s)
//	{
//		cout << s << endl;
//	}
//	~A(){}
//};
//
//class B :virtual public A
//{
//public:
//	B(char* s1, char* s2) :A(s1)
//	{
//		cout << s2 << endl;
//	}
//};
//
//class C :virtual public A
//{
//public:
//	C(char* s1, char* s2) :A(s1)
//	{
//		cout << s2 << endl;
//	}
//};
//
//class D :public B, public C
//{
//public:
//	D(char* s1, char* s2, char* s3, char* s4) : B(s1, s2) , C(s1, s3) , A(s1)
//	{
//		cout << s4 << endl;
//	}
//
//};
//
//int main()
//{
//	D *p = new D("class A", "class B", "class C", "class D");
//	delete p;
//	system("pause");
//	return 0;
//}
////输出：class A,class B,class C,class D



//计算糖果
//A,B,C三个人是好朋友，每个人手里都有一些糖果，我们不知道他们每个人手里具体
//有多少个糖果，但我们知道以下信息：
//A-B,B-C,A+B,B+C.这四个数值，每个人所拥有的糖果数。现在需要通过这四个数值计算出每个人
//手里有多少个糖果，即A,B,C.这里保证最多只有一组整数A,B,C,满足所有的题设条件/
//输入：1 -2，3 ，4   输出：2，1，3
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int A, B1,B2, C;//每个人手里的糖果数
//	
//	A = (a + c) / 2;
//	B1 = (b + d) / 2;
//	B2 = (c - a) / 2;
//	C = (d - b) / 2;
//
//	if (B1 == B2)
//	{
//		cout << A <<" "<< B1 <<" "<< C << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//
//}

//进制转换
//输入：输入一行，M N(2<=N<=16).
//为每个测试实例输出转换后的数，每个输出占一行。如果N大于9，则对应的数字规则参考16
//进制（比如，10用A表示，等等）
//输入：7 2    输出：111


#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	int M, N;
	cin >> M >>N;
	string s = "0123456789ABCDEF";
	bool flag = false;
	vector<char> vc;
	if (M < 0)
	{
		M = 0 - M;
		flag = true;
	}
	do{
		int b = M%N;
		vc.push_back(s[b]);
		M = M / N;

	} while (M>0);
	reverse(vc.begin(), vc.end());
	if (flag)
	{
		cout << "-";
		
	}
	for (const auto& e : vc)
	{
		cout << e ;
	}
	system("pause");
	return 0;

}