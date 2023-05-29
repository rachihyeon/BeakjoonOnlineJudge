//#include<stdio.h>
//#define MAX 30
//
//int main(void)
//{
//	int T, N, M, i, j;
//	int arr[MAX][MAX];
//	arr[0][0] = arr[1][0] = arr[1][1] = 1;
//	for (i = 2; i < MAX; i++)
//	{
//		arr[i][0] = arr[i][i] = 1;
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%d%d", &N, &M);
//		printf("%d\n", arr[M][N]);
//	}
//	return 0;
//}