//ͳ�ƻ���
//�����Ĵ�����һ�������ͷ�����һ�����ַ���������"level"��"noon"�ȵȾ��ǻ��Ĵ���
//�ַ���A���ַ���B����û�а취���ַ���B�����ַ���A�γ�һ�����Ĵ�����æѰ���ж����ְ취����ʹ�´�
//��һ�����Ĵ�������ַ���B�����λ�ò�ͬ�Ϳ���Ϊ��һ���İ취��
//���磺A="aba",B="b"
//����������ÿ���������ݹ����С���һ��Ϊ�ַ���A���ڶ���Ϊ�ַ���B���ַ������Ⱦ�С��100��ֻ����Сд��ĸ
//��������һ�����֣���ʾ���ַ���B�����ַ���A֮�󹹳�һ�����Ĵ��ķ�����
//���룺aba b   �����2
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

//��������
//һ��������N��Ԫ�أ���������������͡����磺[-1��2��1],����������������Ϊ[2,1],��Ϊ3��
//����Ϊ���С���һ��һ������n,��ʾһ����n��Ԫ�أ��ڶ���Ϊn��Ԫ�ء�
//�磺���룺3��-1��2��1         �����3
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
//	// �ӵڶ�������ʼѰ��ʹ������
//	for (int i = 1; i < n; ++i){
//		if (sum >= 0){
//			// ֮ǰ�ĺͲ�С��0����ô���Ի�����;����й��׵�
//			sum += a[i];
//		}
//		else{
//			// ǰ���С��0��û��Ҫ�ټ��룬sum�ӵ�ǰ��ʼ�ټ���
//			sum = a[i];
//		}
//		if (max < sum)max = sum;
//	}
//	cout << max;
//	return 0;
//}

//��Ҫ��
//����С����һ��W*H��������ӣ�������б��Ϊ0~H-1��������б��Ϊ0~W-1.
//ÿ���������ٷ�һ�鵰�⣬�������鵰���ŷ����þ��벻�ܵ���2.
//���������������꣨x1,y1),(x2,y2)��ŷ����þ���Ϊ��
//����x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))������ƽ������С����֪�������ԷŶ��ٿ鵰������������
//���룺3 2 �����4

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


//���ַ���ת��������
//��һ���ַ���ת����һ�������Ĺ��ܣ�����string����������Ҫ��ʱ����0��
//Ҫ����ʹ���ַ���ת���������Ŀ⺯������ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0��
//���룺+2147483647 1a33    �����2147483647  0

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int symbol = 1;
		if (str[0] == '-'){//������
			symbol = -1;
			str[0] = '0'; //�����ǡ�0�� ����0
		}
		else if (str[0] == '+'){//��������
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

