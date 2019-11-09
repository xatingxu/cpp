//字符串中找出连续最长的数字串
//读入一个字符串str,输出字符串str中的连续最长的数字串
//如：输入：abcd12345ed125ss123456789
//输出：      123456789
//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//
//	string temp;//定义一个临时的字符串数组保存数字串
//	string maxs1;//保存最长的那个数字串
//	int count = 0;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			while (str[i] >= '0' && str[i] <= '9')
//			{
//				temp += str[i++];
//			}
//			if (temp.size()>count)
//			{
//				maxs1 = temp;
//				count = temp.size();
//			}
//			
//		}
//		temp.clear();
//	}
//	cout << maxs1;
//	system("pause");
//	return 0;
//}


//数组中出现次数超过一半的数字
//数组中有一个数字出现的数字超过数组长度的一半，请找到这个数字。

//例如：输入一个长度为9的数组{1，2，3，2，2，2，5，4，2}。由于
//数字2在数组中出现了5次，超过数组长度的一半，输出2，如果不存在输出0；


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//int More_Solution(vector<int> numbers)
//{
//	/*sort(numbers.begin(), numbers.end());
//	int key = numbers[numbers.size() / 2];
//	int count = 0;
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		if (key == numbers[i])
//		{
//			count++;
//		}
//	}
//	if (count>numbers.size() / 2)
//		return key;
//	return 0;*/
//	map<int, int> m;
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		m[numbers[i]] += 1;
//		if (m[numbers[i]]>numbers.size() / 2)
//			return numbers[i];
//		return 0;
//	}
//
//}
//int main()
//{
//	vector<int> num;
//	for (int i = 0; i < num.size(); i++)
//	{
//		
//	}
//	cout<<More_Solution(num)<<endl;
//	system("pause");
//	return 0;
//
//
//}

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(100);
	v.push_back(300);
	v.push_back(300);
	v.push_back(300);
	v.push_back(300);
	v.push_back(500);
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		if (*it == 300)
		{
			it = v.erase(it);
		}
	}
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	system("pause");
	return 0;

}
//100,300,300,500