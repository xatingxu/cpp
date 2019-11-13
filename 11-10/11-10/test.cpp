//统计回文
//“回文串”是一个正读和反读都一样的字符串，比如"level"和"noon"等等就是回文串。
//字符串A和字符串B，有没有办法将字符串B插入字符串A形成一个回文串。帮忙寻找有多少种办法可以使新串
//是一个回文串。如果字符串B插入的位置不同就考虑为不一样的办法。
//例如：A="aba",B="b"
//输入描述：每组输入数据共两行。第一行为字符串A，第二行为字符串B，字符串长度均小于100且只包含小写字母
//输出：输出一个数字，表示把字符串B插入字符串A之后构成一个回文串的方法数
//输入：aba b   输出：2
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string A, B;
//	cin >> A >> B;
//	int count = 0;
//	for (int i = 0; i <= A.size(); i++)
//	{
//		string temp=A;
//		temp.insert(i, B);
//		string s1=temp;
//		reverse(s1.begin(), s1.end());
//		if (temp == s1)
//		{
//			//cout << temp << endl;
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}

//连续最大和
//一个数组有N个元素，求连续数组的最大和。例如：[-1，2，1],和最大的连续子数组为[2,1],和为3。
//输入为两行。第一行一个整数n,表示一共有n个元素；第二行为n个元素。
//如：输入：3，-1，2，1         输出：3
#include <iostream>
#include <cstdlib>
#include <limits.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int cur = 0;
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int tem = 0;
		cin >> tem;
		cur += tem;
		if (cur>max)
		{
			max = cur;
		}
		if (cur < 0)
		{
			cur = 0;
		}
	}
	cout << max << endl;
	system("pause");
	return 0;
}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	int a[n];
//	for (int i = 0; i < n; ++i){
//		cin >> a[i];
//	}
//
//	int sum = a[0];
//	int max = a[0];
//	// 从第二个数起开始寻找使和最大的
//	for (int i = 1; i < n; ++i){
//		if (sum >= 0){
//			// 之前的和不小于0，那么它对获得最大和就是有贡献的
//			sum += a[i];
//		}
//		else{
//			// 前面和小于0，没必要再计入，sum从当前开始再计起
//			sum = a[i];
//		}
//		if (max < sum)max = sum;
//	}
//	cout << max;
//	return 0;
//}

//不要二
//二货小易有一个W*H的网格盒子，网格的行编号为0~H-1，网格的列编号为0~W-1.
//每个格子至少放一块蛋糕，任意两块蛋糕的欧几里得距离不能等于2.
//对于两个格子坐标（x1,y1),(x2,y2)的欧几里得距离为：
//（（x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))的算数平方根，小易想知道最多可以放多少块蛋糕在网格盒子里。
//输入：3 2 输出：4

//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int W, H, i, j, counts = 0;
//	cin >> W >> H;
//	if (W % 4 == 0 || H % 4 == 0)
//	{
//		counts = W*H / 2;
//	}
//	else if (W % 2 == 0 && H % 2 == 0)
//	{
//		counts = (W*H / 4 + 1) * 2;
//	}
//	else
//	{
//		counts = W*H / 2 + 1;
//	}
//	cout << counts << endl;
//	system("pause");
//	return 0;
//}


//把字符串转化成整数
//把一个字符串转化成一个整数的功能，但是string不符合数字要求时返回0；
//要求不能使用字符串转换成整数的库函数。数值为0或者字符串不是一个合法的数值则返回0；
//输入：+2147483647 1a33    输出：2147483647  0

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int symbol = 1;
		if (str[0] == '-'){//处理负号
			symbol = -1;
			str[0] = '0'; //这里是‘0’ 不是0
		}
		else if (str[0] == '+'){//处理正号
			symbol = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i<str.size(); ++i){
			if (str[i] < '0' || str[i] > '9'){
				sum = 0;
				break;
			}

			sum = sum * 10 + str[i] - '0';

		}
		return symbol * sum;

	}
};

