//n���������������飬�ҵ�ÿ��Ԫ�غ��������ĵ�һ������Ҫ��ʱ�临�Ӷ�ΪO(n)
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