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
////�����class A,class B,class C,class D



//�����ǹ�
//A,B,C�������Ǻ����ѣ�ÿ�������ﶼ��һЩ�ǹ������ǲ�֪������ÿ�����������
//�ж��ٸ��ǹ���������֪��������Ϣ��
//A-B,B-C,A+B,B+C.���ĸ���ֵ��ÿ������ӵ�е��ǹ�����������Ҫͨ�����ĸ���ֵ�����ÿ����
//�����ж��ٸ��ǹ�����A,B,C.���ﱣ֤���ֻ��һ������A,B,C,�������е���������/
//���룺1 -2��3 ��4   �����2��1��3
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int A, B1,B2, C;//ÿ����������ǹ���
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

//����ת��
//���룺����һ�У�M N(2<=N<=16).
//Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����N����9�����Ӧ�����ֹ���ο�16
//���ƣ����磬10��A��ʾ���ȵȣ�
//���룺7 2    �����111


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