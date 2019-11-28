//考虑如下的序列生成算法：从整数 n 开始，如果 n 是偶数，把它除以 2；如果 n 是奇数，把它乘 3 加1。用新得到的值重复上述步骤，直到 n = 1 时停止。
//例如，n = 22 时该算法生成的序列是：22，11，34，17，52，26，13，40，20，10，5，16，8，4，2，1
//人们猜想（没有得到证明）对于任意整数 n，该算法总能终止于 n = 1。这个猜想对于至少 1 000 000内的整数都是正确的。
//对于给定的 n，该序列的元素（包括 1）个数被称为 n 的循环节长度。在上述例子中，22 的循环节长度为 16。输入两个数 i 和 j，
//你的任务是计算 i 到 j（包含 i 和 j）之间的整数中，循环节长度的最大值。
//[输入]
//输入每行包含两个整数 i 和 j。所有整数大于 0，小于 1 000 000。
//[输出]
//对于每对整数 i 和 j，按原来的顺序输出 i 和 j，然后输出二者之间的整数中的最大循环节长度。这三个整数应该用单个空格隔开，且在同一行输出。
//对于读入的每一组数据，在输出中应位于单独的一行。
//[样例输入]
//1 10
//100 200
//201 210
//900 1000
//[样例输出]
//1 10 20
//100 200 125
//201 210 89
//900 1000 174

//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//int Getlength(int input){
//	int count = 0;
//	while (input > 1)
//	{
//		if (input % 2 == 0)
//		{
//			input = input / 2;
//		}
//		else
//		{
//			input = input * 3 + 1;
//		}
//		count++;
//	}
//	count++;
//	return count;
//}
//int main()
//{
//	int i, j;
//	while (cin >> i >> j)
//	{
//		int max = 0;
//		for (int k = i; k <= j; k++)
//		{
//			int temp = Getlength(k);
//			max = max > temp ? max : temp;
//			
//		}
//		cout <<i<<'\0'<<j<<'\0'<< max << endl;
//	}
//	system("pause");
//	return 0;
//}

//网友年龄
//
//某君新认识一网友。
//当问及年龄时，他的网友说：
//“我的年龄是个2位数，我比儿子大27岁,
//如果把我的年龄的两位数字交换位置，刚好就是我儿子的年龄”
//
//请你计算：网友的年龄一共有多少种可能情况？
//
//提示：30岁就是其中一种可能哦.
//
//请填写表示可能情况的种数。


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	
//	int count = 0;
//	for (int i = 27; i < 100; i++)
//	{
//		int Fay = i;
//		int Soy = (Fay / 10) + (Fay % 10) * 10;
//		if (Fay - Soy == 27)
//		{
//			count++;
//		}
//
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}

//生日蜡烛
//
//某君从某年开始每年都举办一次生日party，并且每次都要吹熄与年龄相同根数的蜡烛。
//
//现在算起来，他一共吹熄了236根蜡烛。
//
//请问，他从多少岁开始过生日party的？
//
//请填写他开始过生日party的年龄数。

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int begin_candle = 0;
//
//	while (true)
//	{
//		begin_candle++;
//		int sum = 0, age = begin_candle;
//		while (age <= 100)
//		{
//			sum += age;
//			age++;
//			if (sum == 236)
//			{
//				cout << "开始吹蜡烛年龄: " << begin_candle << endl;
//				cout << "现在年龄: " << age << endl;
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//字符串反转
//写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串
//例如：输入：abcd dcba
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		reverse(s.begin(), s.end());
//		cout << s ;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//公共字符串的计算
//计算两个字符串的最大公共字串的长度,字符不区分大小写。
//例如：输入：asdfas werasdfaswer
//		输出：6

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int m = s1.length();
		int n = s2.length();
		int Maxlength = 0;
		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (s1[i - 1] == s2[j - 1])
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
					Maxlength = max(Maxlength, dp[i][j]);
				}
			}
		}
		cout << Maxlength << endl;
	}
	system("pause");
	return 0;
}





