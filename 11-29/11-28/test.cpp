//�������µ����������㷨�������� n ��ʼ����� n ��ż������������ 2����� n �������������� 3 ��1�����µõ���ֵ�ظ��������裬ֱ�� n = 1 ʱֹͣ��
//���磬n = 22 ʱ���㷨���ɵ������ǣ�22��11��34��17��52��26��13��40��20��10��5��16��8��4��2��1
//���ǲ��루û�еõ�֤���������������� n�����㷨������ֹ�� n = 1���������������� 1 000 000�ڵ�����������ȷ�ġ�
//���ڸ����� n�������е�Ԫ�أ����� 1����������Ϊ n ��ѭ���ڳ��ȡ������������У�22 ��ѭ���ڳ���Ϊ 16������������ i �� j��
//��������Ǽ��� i �� j������ i �� j��֮��������У�ѭ���ڳ��ȵ����ֵ��
//[����]
//����ÿ�а����������� i �� j�������������� 0��С�� 1 000 000��
//[���]
//����ÿ������ i �� j����ԭ����˳����� i �� j��Ȼ���������֮��������е����ѭ���ڳ��ȡ�����������Ӧ���õ����ո����������ͬһ�������
//���ڶ����ÿһ�����ݣ��������Ӧλ�ڵ�����һ�С�
//[��������]
//1 10
//100 200
//201 210
//900 1000
//[�������]
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

//��������
//
//ĳ������ʶһ���ѡ�
//���ʼ�����ʱ����������˵��
//���ҵ������Ǹ�2λ�����ұȶ��Ӵ�27��,
//������ҵ��������λ���ֽ���λ�ã��պþ����Ҷ��ӵ����䡱
//
//������㣺���ѵ�����һ���ж����ֿ��������
//
//��ʾ��30���������һ�ֿ���Ŷ.
//
//����д��ʾ���������������


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

//��������
//
//ĳ����ĳ�꿪ʼÿ�궼�ٰ�һ������party������ÿ�ζ�Ҫ��Ϩ��������ͬ����������
//
//��������������һ����Ϩ��236������
//
//���ʣ����Ӷ����꿪ʼ������party�ģ�
//
//����д����ʼ������party����������

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
//				cout << "��ʼ����������: " << begin_candle << endl;
//				cout << "��������: " << age << endl;
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//�ַ�����ת
//д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ���
//���磺���룺abcd dcba
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

//�����ַ����ļ���
//���������ַ�������󹫹��ִ��ĳ���,�ַ������ִ�Сд��
//���磺���룺asdfas werasdfaswer
//		�����6

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





