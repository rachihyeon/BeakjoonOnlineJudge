//#include<stdio.h>
//#include<stdlib.h>
//int max_time_count[10000];
//int time_count_index = 0;
//int stack[1000];
//
//int main(void)
//{
//	int T, N, K, X = 0, Y = 0, W;
//	int i = 0, j = 0;
//	int count = 0, first = 0;
//	int count_time = 0, max_time;
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%d%d", &N, &K);
//		int* D_i;
//		int** path;
//		int* on_path;
//		D_i = (int*)malloc(sizeof(int) * N);		//노드별 시간 저장공간할당
//		path = (int**)malloc(sizeof(int*) * K);		//길 종류를 이중포인터로 각각지정
//		on_path = (int*)calloc(K, sizeof(int));
//		for (i = 0; i < K; i++)
//		{
//			path[i] = (int*)malloc(sizeof(int) * 2);	//각 길을 방향을 갖기 때문에 X, Y를 저장할 2개가 필요.
//		}
//		for (i = 0; i < N; i++)
//		{
//			scanf_s("%d", &D_i[i]);
//		}
//		for (i = 0; i < K; i++)
//		{
//			scanf_s("%d%d", &path[i][0], &path[i][1]);
//		}
//		scanf_s("%d", &W);							//입력 끝
//		/*for (i = 0; i < N; i++)
//		{
//			printf("%d ", D_i[i]);
//		}
//		printf("노드 시간\n");
//		for (i = 0; i < K; i++)
//		{
//			printf("%d%d\n", path[i][0], path[i][1]);
//		}
//		printf("길\n");
//		printf("%d", W);*/							//입력 검토
//		count_time += D_i[W - 1];
//		stack[0] = W;
//		j = 0;
//		while (1)
//		{
//			for (i = 0; i < K; i++)
//			{
//				if (path[i][1] == stack[j] && on_path[i] == 0) //&& node[path[i][0] - 1] == 0
//				{
//					stack[++j] = path[i][0];
//					//node[path[i][0] - 1] = 1;
//					count = 1;
//					count_time += D_i[stack[j] - 1];
//					on_path[i] = 1;
//					break;
//				}
//				count = 0;
//			}
//			if (count == 0)
//			{
//				max_time_count[time_count_index++] = count_time;		//이부분 확인
//				//printf("%d\n", max_time_count[time_count_index - 1]);
//				count_time -= D_i[stack[j] - 1];
//				stack[j--] = 0;
//			}
//			if (stack[0] == 0) break;
//		}
//		// 최댓값 탐색
//		max_time = max_time_count[0];
//		for (i = 1; i < time_count_index; i++)
//		{
//			if (max_time_count[i] > max_time)
//			{
//				max_time = max_time_count[i];
//			}
//		}
//		printf("%d\n", max_time);
//		free(D_i);
//		for (i = 0; i < K; i++)
//		{
//			free(path[i]);
//		}
//		free(path);
//		free(on_path);
//		N = K = X = 0; Y = 0; W = 0;
//		i = 0; j = 0;
//		count = 0;
//		count_time = 0;
//		time_count_index = 0;
//	}
//
//	return 0;
//}