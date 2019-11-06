//牛牛定义排序子序列为一个数组中一段连续的子序列，并且这段
//子序列是非递增或者非递减排序的。牛牛有一个长度为n的整数数组A，
//他现在有一个任务是把数组A分为若干个排序子序列，牛牛想知道他最少
//可以把这个数组分为几段排序子序列。
//如样例所示，牛牛可以把数组A划分为[1,2,3]和[2,2,1]两个排序子序列，
//至少需要划分为2个排序子序列，所以输出2.
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

//将一句话的单词进行倒置，标点不倒置。比如 I like beijing.,经过函数后变为beijing.like I
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
//	//反转整个句子
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
