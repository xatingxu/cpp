#include <iostream>
#include <string>
using namespace std;

int Sol(string R)
{
	int v[256];
	v['I']=1;
	v['V']=5;
	v['X'] = 10;
    v['C'] = 100;
    v['M'] = 1000;
    v['L'] = 50;
    v['D'] = 500;
    
    int val=0;
    for(int i=0;i<R.length();i++)
    {
    	if(i+1>=R.length()||v[R[i]]<=v[R[i-1]])
    	{
    		val+=v[R[i]];
    	}
    	else
    	{
    		val-=v[R[i]];
    	}
    		
    }
   return val;
}

int main()
{
	string Roman;
	cin>>Roman;
	cout<<Sol(Roman)<<endl;
	return 0;
}
