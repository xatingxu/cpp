//΢�ź��
//�����ڼ�С��ʹ��΢���յ��ܶ��������ǳ����ġ��ڲ鿴��ȡ�����¼ʱ���֣�
//ĳ����������ֵĴ��������˺��������һ�롣���С���ҳ��ú��������һ�������������gifts�����Ĵ�Сn,
//�뷵���������Ľ���û�н���������һ�룬����0.
//���룺[1,2,3,2,2],5   //�����2
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstdlib>
//using namespace std;
////�ҳ��ֳ���һ��������������һ�����м�������ǰһλ
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

//�����ַ����ľ���
//Levenshtein���룬�ֳƱ༭���룬ָ���������ַ���֮�䣬��һ��ת������һ����������ٱ༭����������
//��ɵı༭����������һ���ַ��滻����һ���ַ�������һ���ַ���ɾ��һ���ַ���
//���������ַ�����дһ���㷨��������֮��ı༭���롣
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