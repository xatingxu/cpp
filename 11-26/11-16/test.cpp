//#define _CRT
//#include <stdio.h>
//#include <stdlib.h>
//
////int sum = 0;
////int* getAdd(int x, int y)
////{
////	sum = x + y;
////	return &sum;
////}
////
////int getDiff(int x, int y)
////{
////	return (x > y) ? (x - y) : (y - x);
////}
////
////int main()
////{
////	int *ptemp, temp;
////	ptemp = getAdd(112, 9);
////	printf("getAdd:%d\n", *ptemp);
////
////	temp = getDiff(112, 9);
////	printf("getDiff:%d\n", temp);
////
////	system("pause");
////	return 0;
////}
//
//
//int(*fun)(int x, int y);
//
//int Max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//int Min(int x, int y)
//{
//	return (x > y) ? y : x;
//}
//
//int main()
//{
//	int num1 = 109, num2 = 80;
//
//	fun = Max;
//	printf("Max is %d\n", fun(num1, num2));
//
//	fun = Min;
//	printf("Min is %d\n", fun(num1, num2));
//
//	system("pause");
//	return 0;
//}

//������ǵ�ʵ��
//#include <iostream>
//#include <iomanip>
//#include <cstdlib>
//using namespace std;


//������Ǳ���
//���n�е�һ��ż�����ֵ�λ�ã����û��ż�������-1����������3�������2��
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n <= 2)
//			cout << -1 << endl;
//		if (n % 2 == 1)
//			cout << 2 << endl;
//		else if (n % 2 == 0)
//		{
//			if (n % 4 == 0)
//				cout << 3 << endl;
//			else
//				cout << 4 << endl;
//		}
//	}
//	system("pause");
//
//	return 0;
//}

//�����������
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string a, b, result;
//	int flag = 0;
//	while (cin >> a >> b)
//	{
//		const size_t n = a.size() > b.size() ? a.size() : b.size();
//		reverse(a.begin(), a.end());
//		reverse(b.begin(), b.end());
//		for (size_t i = 0; i < n; i++)
//		{
//			//���ַ�ת�����������õ�����
//			const int a1 = i < a.size() ? a[i] - '0' : 0;
//			const int b1 = i < b.size() ? b[i] - '0' : 0;
//			//��ǰλ���
//			const int val = (a1 + b1 + flag) % 10;
//			//��λ���
//			flag = (a1 + b1 + flag) / 10;
//			result.insert(result.begin(), val + '0');
//		}
//		if (flag == 1)
//			result.insert(result.begin(), '1');
//		cout << result << endl;
//		result.clear();
//		flag = 0;
//
//	}
//	system("pause");
//	return 0;
//}
//


//������
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 1;
//	else 
//		return fun(n - 1) + fun(n - 2);
//
//}
//
//int main()
//{
//	int month;
//	while (cin >> month)
//	{
//		int count=fun(month);
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}

//�ַ���ͨ���

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//bool Match(const char* s1, const char* s2)
//{
//	if (*s1 == '\0'&& *s2 == '\0')
//		return true;
//	if (*s1 == '\0' || *s2 == '\0')
//		return false;
//	if (*s1 == '?')
//	{
//		return Match(s1 + 1, s2 + 1);
//	}
//	else if (*s1 == '*')
//	{
//		return Match(s1 + 1, s2) || Match(s1 + 1, s2 + 1) || Match(s1, s2 + 1);
//	}
//		
//	else if (*s1 == *s2)
//	{
//		return Match(s1 + 1, s2 + 1);
//	}
//	return false;
//}
//
//int main()
//{
//	string s1;
//	string s2;
//	while (cin >> s1 >> s2)
//	{
//		if (Match(s1.c_str(), s2.c_str()))
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//	system("pause");
//	return 0;
//}

//��ˮƿ
//ĳ�̵�涨��������ˮƿ���Ի�һƿ��ˮ��С��������ʮ������ˮƿ����������
//������ƿ��ˮ�ȡ�
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int n;
//	/*while (cin >> n)
//	{
//		cout << n/2 << endl;
//	}*/
//	while (cin >> n)
//	{
//      int a, b;
//	  int ret = 0;
//	  while (n >= 3)
//	  {
//		  a = n / 3;
//		  b = n % 3;
//		  ret += a;
//		  n = a + b;
//	  }
//	  if (n == 2)
//		  ret += 1;
//	  cout << ret << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

//���������ַ���a,b�е���Ĺ����ַ���
//���������ַ���a,b�е���Ĺ����ַ����������ֶ��������ڽ϶̴������ȳ��ֵ��Ǹ���
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		if (a.size() > b.size())
			swap(a, b);
		string str_m;//�洢������Ӵ�
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = i; j < b.size(); j++)
			{
				string temp = a.substr(i, j - i + 1);
				if (int(b.find(temp)) < 0)
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}
		cout << str_m << endl;
	}
	system("pause");
	return 0;
}