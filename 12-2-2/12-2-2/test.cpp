//微信红包
//春节期间小明使用微信收到很多个红包，非常开心。在查看领取红包记录时发现，
//某个红包金额出现的次数超过了红包总数的一半。请帮小明找出该红包金额。给定一个红包金额的数组gifts及它的大小n,
//请返回所求红包的金额。若没有金额超过总数的一半，返回0.
//输入：[1,2,3,2,2],5   //输出：2
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstdlib>
//using namespace std;
////找出现超过一半的数，当排序后一定在中间数或者前一位
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		sort(gifts.begin(), gifts.end());
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (gifts[i] == gifts[n/2])
//			{
//				count++;
//			}
//		}
//		if (count>n / 2)
//			return gifts[n / 2];
//		return 0;
//	}
//	
//};
//int main()
//{
//	Gift g;
//	vector<int> gifts; 
//    int n = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> gifts[i];
//	}
//	cin >> n;
//	int sum = g.getValue(gifts, n);
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}

//计算字符串的距离
//Levenshtein距离，又称编辑距离，指的是两个字符串之间，由一个转换成另一个所需的最少编辑操作次数。
//许可的编辑操作包括将一个字符替换成另一个字符，插入一个字符，删除一个字符。
//给定两个字符串，写一个算法计算它们之间的编辑距离。
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
		for (int i = 1; i <= s1.size(); i++)
			dp[i][0] = i;
		for (int i = 1; i <= s2.size(); i++)
			dp[0][i] = i;
		for (int i = 1; i <= s1.size(); i++)
		{
			for (int j = 1; j <= s2.size(); j++)
			{
				int min1 = min(dp[i - 1][j], dp[i][j - 1]) + 1;
				dp[i][j] = min((s1[i - 1] == s2[j - 1] ? 0 : 1) + dp[i - 1][j - 1], min1);
			}
			
		}
		cout << dp[s1.size()][s2.size()] << endl;
	}
	system("pause");
	return 0;
}