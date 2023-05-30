//#include<stdio.h>
//int check_W(int a, int b);
//int check_B(int a, int b);
//
//char block[50][51];
//char chess_W[8][9] = {
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"}
//};
//char chess_B[8][9] = {
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"}
//};
//
//int main(void)
//{
//	int N, M, i, j;
//	int max, W, B;
//	char start;
//	scanf_s("%d%d", &N, &M);
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%s", block[i], 51);
//	}
//	W = check_W(0, 0);
//	B = check_B(0, 0);
//	if (W >= B)
//	{
//		max = W;
//	}
//	else
//	{
//		max = B;
//	}
//	//printf("%d\n", max);
//	for (i = 0; i <= N - 8; i++)
//	{
//		for (j = 0; j <= M - 8; j++)
//		{
//			W = check_W(i, j);
//			B = check_B(i, j);
//			if (W >= B && W > max)
//			{
//				max = W;
//				//printf("%d\n", max);
//			}
//			else if(W < B && B > max)
//			{
//				max = B;
//				//printf("%d\n", max);
//			}
//		}
//	}
//	printf("%d\n", 64 - max);
//	return 0;
//}
//
//int check_W(int a, int b)
//{
//	int count = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (block[a + i][b + j] == chess_W[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//int check_B(int a, int b)
//{
//	int count = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (block[a + i][b + j] == chess_B[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
