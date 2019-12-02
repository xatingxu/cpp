//小易经常沉迷于网络游戏。有一次，他在玩一个打怪升级的游戏，他的角色初始值为a.
//在接下来的一段时间内，他将会依此遇见n个怪物，每个怪物的防御能力为b1,b2,b3...bn.
//如果遇见的怪物防御值bi小于等于小易的当前能力值c,那么他就能轻松打败怪物，并且使得
//自己的能力值增加bi;如果bi大于c，那他也能打败怪物，但他的能力值只能增加bi与c的最大公约数。
//那么问题就来了，在一系列的锻炼后，效益的最终能力值为多少？
//输入：第一行两个整数：一个代表怪物的数量，一个代表小易的初始能力值
//        第二行的n个整数，分别表示每个怪物的能力值。
//输出：小易的最终能力值

//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////最大公约数
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
//	int a, n;//小易的初始值和n个怪物
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


//找出字符串中第一次只出现一次的字符
//输入：输入一个非空字符串
//输出：输出第一个只出现一次的字符，如果不存在输出-1；

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
//			//find(s1[i])从字符串左侧开始匹配s1[i],并返回下标位置。
//			//rfind(s1[i])从字符串右侧开始匹配s1[i],并返回下标位置。
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
//			a[s[i] - 'a']++;//记录每个字母出现的次数
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

