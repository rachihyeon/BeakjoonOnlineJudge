//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//typedef long long ll;
//ll ex[1000001];
//bool prime[1000001];
//
//int main(void)
//{
//	ll min, max, i, j, x, y;
//	int count = 0;
//	bool find = false;
//	scanf_s("%lld%lld", &min, &max);
//	for (i = 0; i <= 1000000; i++)
//	{
//		prime[i] = true;
//	}
//	for (i = min; i <= max; i++)
//	{
//		ex[i - min] = i;
//	}
//
//	for (i = 2; i <= (int)sqrt(max); i++)
//	{
//		ll x = min / (i * i);
//		if (min % (i * i) != 0) x++;
//
//		while ((i * i) * x <= max)
//		{
//			prime[(i * i) * x - min] = false;
//			x++;
//		}
//	}
//	for (i = 0; i <= max - min; i++)
//	{
//		if (prime[i] == true)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}