//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX(a, b) (a > b) ? a : b
//using namespace std;
//
//class ACM {
//private:
//	vector<vector<int>> connect;
//	vector<int> D;
//	vector<int> visited;
//	vector<int> time;
//	queue<int> start_node;
//	int N;
//	int K;
//	int W;
//
//public:
//	ACM()
//	{
//		cin >> N >> K;
//		D.resize(N + 1);
//		connect.resize(N + 1);
//		visited.resize(N + 1);
//		time.resize(N + 1);
//		for (int i = 1; i <= N; i++)
//		{
//			cin >> D[i];
//			time[i] = D[i];
//		}
//		for (int i = 0; i < K; i++)
//		{
//			int X, Y;
//			cin >> X >> Y;
//			connect[X].push_back(Y);
//			visited[Y]++;
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			if (visited[i] == 0)
//				start_node.push(i);
//		}
//		cin >> W;
//	}
//	void get_result()
//	{
//		while (start_node.size())
//		{
//			int start = start_node.front();
//			start_node.pop();
//			for (int i = 0; i < connect[start].size(); i++)
//			{
//				int to = connect[start][i];
//				time[to] = MAX(time[to], time[start] + D[to]);
//				visited[to]--;
//
//				if (visited[to] == 0)
//					start_node.push(to);
//			}
//		}
//
//		cout << time[W] << '\n';
//	}
//
//};
//
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		ACM query;
//		query.get_result();
//	}
//	return 0;
//}
