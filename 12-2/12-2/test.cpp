//С�׾���������������Ϸ����һ�Σ�������һ�������������Ϸ�����Ľ�ɫ��ʼֵΪa.
//�ڽ�������һ��ʱ���ڣ���������������n�����ÿ������ķ�������Ϊb1,b2,b3...bn.
//��������Ĺ������ֵbiС�ڵ���С�׵ĵ�ǰ����ֵc,��ô���������ɴ�ܹ������ʹ��
//�Լ�������ֵ����bi;���bi����c������Ҳ�ܴ�ܹ������������ֵֻ������bi��c�����Լ����
//��ô��������ˣ���һϵ�еĶ�����Ч�����������ֵΪ���٣�
//���룺��һ������������һ����������������һ������С�׵ĳ�ʼ����ֵ
//        �ڶ��е�n���������ֱ��ʾÿ�����������ֵ��
//�����С�׵���������ֵ

//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////���Լ��
//int GCD(int x, int y)
//{
//	int mins = min(x, y);
//	int ret;
//	for (int i = 1; i <= mins; i++)
//	{
//		if (x%i == 0 && y%i == 0)
//		{
//			ret = i;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int a, n;//С�׵ĳ�ʼֵ��n������
//	while (cin >> a >> n)
//	{
//		vector<int> b(a);
//		for (int i = 0; i < a; i++)
//		{
//			cin >> b[i];
//			
//		}
//		for (int i = 0; i < a; i++)
//		{
//			if (b[i] <= n)
//			{
//				n += b[i];
//			}
//			else
//			{
//				n += GCD(n, b[i]);
//			}
//		}
//		cout << n << endl;
//	}
//	system("pause");
//	return 0;
//}


//�ҳ��ַ����е�һ��ֻ����һ�ε��ַ�
//���룺����һ���ǿ��ַ���
//����������һ��ֻ����һ�ε��ַ���������������-1��

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string s1;
//	while (getline(cin,s1))
//	{
//		for (int i = 0; i < s1.size(); i++)
//		{
//			//find(s1[i])���ַ�����࿪ʼƥ��s1[i],�������±�λ�á�
//			//rfind(s1[i])���ַ����Ҳ࿪ʼƥ��s1[i],�������±�λ�á�
//			if (s1.find(s1[i]) == s1.rfind(s1[i]))
//			{
//				cout << s1[i] << endl;
//				break;
//			}
//			if (i == s1.size()-1)
//			{
//				cout << -1 << endl;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		bool flag = true;
//		int a[256] = { 0 };
//		if (s.size() < 0)
//		{
//			continue;
//		}
//		for (int i = 0; i < s.size(); i++)
//		{
//			a[s[i] - 'a']++;//��¼ÿ����ĸ���ֵĴ���
//		}
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (a[s[i] - 'a'] == 1)
//			{
//				cout << s[i] << endl;
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << -1 << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//

