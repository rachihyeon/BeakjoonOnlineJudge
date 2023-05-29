//#include<stdio.h>
//#include<stdbool.h>
//int D_i[1001];
//int path[100001][2];
//int build[1001];
//bool on_node[1001];
//
//int main(void)
//{
//	int T, N, K, W, i, j, node;
//	int max = 0;
//	int root_node;
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%d%d", &N, &K);
//		for (i = 1; i <= N; i++)
//		{
//			scanf_s("%d", &D_i[i]);
//			build[i] = D_i[i];
//		}
//		for (i = 0; i < K; i++)
//		{
//			scanf_s("%d%d", &path[i][0], &path[i][1]);
//		}
//		scanf_s("%d", &W);
//		i = 0;
//		while (K - i > 0)
//		{
//			node = path[i][1];
//			if (on_node[node] == true)
//			{
//				i++;
//				continue;
//			}
//			//printf("%d\n", node);
//			for (j = 0; j < K; j++)
//			{
//				if (path[j][1] == node && build[path[j][0]] > max)
//				{
//					//printf("%d\n", path[j][1]);
//					max = build[path[j][0]];
//				}
//			}
//			//printf("\n\n");
//			on_node[node] = true;
//			build[node] += max;
//			max = 0;
//
//			i++;
//		}
//		for (i = 0; i <= K; i++)
//		{
//			on_node[i] = false;
//		}
//		/*for (i = 1; i <= N; i++)
//		{
//			for (j = 0; j < K; j++)
//			{
//				if (path[j][1] == i)
//				{
//					if (build[path[j][0]] > max)
//					{
//						max = build[path[j][0]];
//					}
//				}
//			}
//			build[i] += max;
//			max = 0;
//		}*/
//		printf("%d\n", build[W]);
//		max = 0;
//	}
//	return 0;
//}