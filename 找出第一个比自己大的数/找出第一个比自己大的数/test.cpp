//n个整数的无序数组，找到每个元素后面比它大的第一个数，要求时间复杂度为O(n)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> findMax(vector<int> num)
{
	if (num.size() == 0)
		return num;
	vector<int> res(num.size());
	stack<int> s;
	int i = 0;
	while (i < num.size())
	{
		if (s.empty() || num[s.top()] >= num[i])
		{
			s.push(i++);
		}
		else
		{
			res[s.top()] = num[i];
			s.pop();
		}
	}

	while (!s.empty())
	{
		res[s.top()] = INT_MAX;
		s.pop();
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << endl;
		return res;
	}


}