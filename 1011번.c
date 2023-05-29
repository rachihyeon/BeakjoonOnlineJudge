//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	int T, x, y;
//	int distance;
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%d%d", &x, &y);
//		distance = y - x;
//		if (distance == 1) { printf("1\n"); continue; }
//		for (unsigned long long i = 1; i < pow(2, 16); i++)
//		{
//			if (distance > i * i && distance <= i * (i + 1)) { printf("%llu\n", 2 * i); }
//			else if (distance > i * (i + 1) && distance <= (i + 1) * (i + 1)) { printf("%llu\n", 2 * i + 1); }
//		}
//	}
//	return 0;
//}