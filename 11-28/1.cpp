#include <iostream>
using namespace std;

int fun(int n)
{
	if(n==1)
	{
		return 1;
	}
	
	if(n==2)
	{
		return 2;
	}
	
	else
	{
		return fun(n-2)+fun(n-1);
	}
} 

int main()
{
	int n = 0;
	int ret=0;
	while(cin>>n)
	{
		ret=fun(n);
		cout<<ret<<endl;
	}
	
	return 0;
}
