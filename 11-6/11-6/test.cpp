//ţţ��������������Ϊһ��������һ�������������У��������
//�������Ƿǵ������߷ǵݼ�����ġ�ţţ��һ������Ϊn����������A��
//��������һ�������ǰ�����A��Ϊ���ɸ����������У�ţţ��֪��������
//���԰���������Ϊ�������������С�
//��������ʾ��ţţ���԰�����A����Ϊ[1,2,3]��[2,2,1]�������������У�
//������Ҫ����Ϊ2�����������У��������2.
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int n;
//	int count = 1;
//	vector<int> A;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		A.push_back(a);
//		
//	}
//	for (int i = 1; i<n - 1; i++)
//	{
//		if ((A[i - 1]>A[i] && A[i] < A[i + 1]) || 
//			(A[i - 1]<A[i] && A[i] > A[i + 1]))
//		{
//			count++;
//			if (i != n - 3)
//			{
//				++i;
//			}
//		}
//		
//	}
//	
//	cout << count << endl;
//	system("pause");
//	return 0;
//
//}

//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.,�����������Ϊbeijing.like I
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string s1;
//	
//	getline(cin, s1);
//	//��ת��������
//	reverse(s1.begin(), s1.end());
//	auto it = s1.begin();
//	while (it != s1.end())
//	{
//		auto end = it;
//		while (end != s1.end() && *end != ' ')
//			end++;
//		reverse(it, end);
//		if (end != s1.end())
//		{
//			it = end + 1;
//		}
//		else
//		{
//			it = end;
//		}
//	}
//	
//	cout << s1 << endl;
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	reverse(s.begin(), s.end());
	auto it = s.begin();
	while (it != s.end())
	{
		auto cur = it;
		while (cur != s.end() && *cur != ' ')
		{
			cur++;

		}
		reverse(it, cur);
		if (cur != s.end())
		{
			it = cur + 1;
		}
		else
		{
			it = cur;
		}

	}
	cout << s << endl;
	system("pause");
	return 0;
}
