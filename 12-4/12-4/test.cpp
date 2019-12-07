//���ս�
//��ϷҪ��6*6�������Ͻ��У��������36����ֵ���ȵ����������Ͻǿ�ʼ��Ϸ��ÿ��ֻ�����»��������ƶ�һ�����������½�ֹͣ��һ·�ϵ����ﶼ�����õ���
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		int length = board.size();
		int wideth = board[0].size();
		vector<vector<int>> allPrice;
		for (int i = 0; i < length; i++) {
			vector<int> tmp(wideth, 0);
			allPrice.push_back(tmp);
		}
		allPrice[0][0] = board[0][0];
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < wideth; j++) {
				//�����������꣬�����κδ���
				if (i == 0 && j == 0)
					continue;
				//��������е��ٽ�ߣ�Ҳ���ǵ�һ�У���ô��ֻ��������
				//�����ߵ�ʱ��õ��Ҫ�������ֵ��������
				else if (i == 0) {
					allPrice[i][j] = allPrice[i][j - 1] + board[i][j];
				}
				//��������е��ٽ�ߣ�Ҳ���ǵ�һ�У���ô��ֻ��������
				//�����ߵ�ʱ��õ��Ҫ�������ֵ��������
				else if (j == 0) {
					allPrice[i][j] = allPrice[i - 1][j] + board[i][j];
				}
				else {
					//��ȥ�����ٽ�ߣ�ʣ�µľ��Ǽ��������ߣ�Ҳ�������ߣ�
					//��ʱ���Ҫ�����ߵ���ǰ������п��ܵ������Ҳ�����ߵ���ǰ��
					//����·���ĺ��ǲ�����Щ���е���õ�·�����������ˡ�
					allPrice[i][j] = max(allPrice[i][j - 1], allPrice[i - 1][j]) + board[i]
						[j];
				}
			}
		}
	}
};

		
//�Թ�����
#include<iostream>
#include<vector>
using namespace std;

int N, M; //�ֱ�����к���
vector<vector<int>> maze;//�Թ�����
vector<vector<int>> path_temp;//�洢��ǰ·������һά��ʾλ��
vector<vector<int>> path_best;//�洢���·��

void MazeTrack(int i, int j)
{
	maze[i][j] = 1;//��ʾ��ǰ�ڵ����ߣ���������
	path_temp.push_back({ i, j });//����ǰ�ڵ���뵽·����

	if (i == N - 1 && j == M - 1) //�ж��Ƿ񵽴��յ�
	if (path_best.empty() || path_temp.size() < path_best.size())
		path_best = path_temp;

	if (i - 1 >= 0 && maze[i - 1][j] == 0)//̽���������Ƿ����
		MazeTrack(i - 1, j);
	if (i + 1 < N && maze[i + 1][j] == 0)//̽���������Ƿ����
		MazeTrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0)//̽���������Ƿ����
		MazeTrack(i, j - 1);
	if (j + 1 < M && maze[i][j + 1] == 0)//̽���������Ƿ����
		MazeTrack(i, j + 1);
	maze[i][j] = 0;         //�ָ��ֳ�����Ϊδ��
	path_temp.pop_back();
}
int main()
{
	while (cin >> N >> M)
	{
		maze = vector<vector<int>>(N, vector<int>(M, 0));
		path_temp.clear();
		path_best.clear();
		for (auto &i : maze)
		for (auto &j : i)
			cin >> j;
		MazeTrack(0, 0);//����Ѱ���Թ����ͨ·
		for (auto i : path_best)
			cout << '(' << i[0] << ',' << i[1] << ')' << endl;//���ͨ·
	}
	return 0;
}