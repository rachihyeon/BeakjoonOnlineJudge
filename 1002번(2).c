//#include<stdio.h>
//
//int main(void)
//{
//	int T, X_1, Y_1, r_1, X_2, Y_2, r_2;
//	int length_2;
//	int sub;
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%d%d%d%d%d%d", &X_1, &Y_1, &r_1, &X_2, &Y_2, &r_2);
//		length_2 = (X_1 - X_2) * (X_1 - X_2) + (Y_1 - Y_2) * (Y_1 - Y_2);
//		sub = r_1 > r_2 ? r_1 - r_2 : r_2 - r_1;
//
//		if (r_1 == r_2 && length_2 == 0) { printf("-1\n"); }
//		else if (length_2 > (r_1 + r_2) * (r_1 + r_2) || length_2 < sub * sub) { printf("0\n"); }
//		else if (length_2 < (r_1 + r_2) * (r_1 + r_2) && length_2 > sub * sub) { printf("2\n"); }
//		else if (length_2 == (r_1 + r_2) * (r_1 + r_2) || length_2 == sub * sub) { printf("1\n"); }
//	}
//	return 0;
//}