//#include<iostream>
//#include<queue>
//#include<utility>
//#define pii pair<int, int>
//using namespace std;
//
//class CABBAGE {
//private:
//	int M;
//	int N;
//	int K;
//	bool** field;
//	int NumberOfBlock;
//
//public:
//	CABBAGE()
//	{
//		cin >> M >> N >> K;
//		NumberOfBlock = 0;
//		field = (bool**)malloc(sizeof(bool*) * (N + 2));
//		for (int i = 0; i <= N + 1; i++)
//		{
//			field[i] = (bool*)malloc(sizeof(bool) * (M + 2));
//		}
//		for (int i = 0; i <= N + 1; i++)
//		{
//			for (int j = 0; j <= M + 1; j++)
//			{
//				field[i][j] = false;
//			}
//		}
//		for (int i = 0; i < K; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			field[y + 1][x + 1] = true;
//		}
//	}
//	~CABBAGE()
//	{
//		for (int i = 0; i <= N + 1; i++)
//		{
//			free(field[i]);
//		}
//		free(field);
//	}
//
//	void bfs(int x, int y)
//	{
//		queue<pii> Que;
//		pii temp;
//		Que.push(pii(x, y));
//		field[x][y] = false;
//
//		while (Que.size())
//		{
//			temp = Que.front();
//			Que.pop();
//
//			if (field[temp.first - 1][temp.second] == true)
//			{
//				Que.push(pii(temp.first - 1, temp.second));
//				field[temp.first - 1][temp.second] = false;
//			}
//
//			if (field[temp.first + 1][temp.second] == true)
//			{
//				Que.push(pii(temp.first + 1, temp.second));
//				field[temp.first + 1][temp.second] = false;
//			}
//
//			if (field[temp.first][temp.second - 1] == true)
//			{
//				Que.push(pii(temp.first, temp.second - 1));
//				field[temp.first][temp.second - 1] = false;
//			}
//
//			if (field[temp.first][temp.second + 1] == true)
//			{
//				Que.push(pii(temp.first, temp.second + 1));
//				field[temp.first][temp.second + 1] = false;
//			}
//		}
//
//	}
//
//	void get_result()
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= M; j++)
//			{
//				if (field[i][j] == true)
//				{
//					bfs(i, j);
//					NumberOfBlock++;
//				}
//			}
//		}
//
//		cout << NumberOfBlock << '\n';
//	}
//};
//
//int main(void)
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		CABBAGE query;
//		query.get_result();
//	}
//}