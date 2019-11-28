#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=4;
	vector<int> v(n);
    for(int i=0;i<n;++i)
	{
	  cin>>v[i];
	}
	int flag;
	cin>>flag;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(v[i]+v[j]==flag)
			{
				cout<<'['<<i<<','<<j<<']';
			}
		}
	}
	cout<<endl;
	return 0;
}
