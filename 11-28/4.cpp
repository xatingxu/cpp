#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(int M,int R)
{
	if(M==0)
	{
		cout<<0;
	}
	  
	else
	{
		f(M/R,R);
		cout<<M%R;
	}
}
int main()
{
	int M;
	cin>>M;
	int R;
	cin>>R;
	f(M,R);
	cout<<endl;
    return 0;
}
