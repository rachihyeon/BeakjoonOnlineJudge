//#include<stdio.h>
//#include<stdlib.h>
//int A[50];
//int B[50];
//int temp_arr[50];
//
//void up_Merge(int start, int mid, int end, int* arr)
//{
//	for (int i = start; i <= end; i++)
//	{
//		temp_arr[i] = *(arr + i);
//	}
//	int left = start;
//	int right = mid + 1;
//	int index = start;
//
//	while (left <= mid && right <= end)
//	{
//		if (temp_arr[left] <= temp_arr[right])
//		{
//			*(arr + index) = temp_arr[left];
//			left++;
//		}
//		else
//		{
//			*(arr + index) = temp_arr[right];
//			right++;
//		}
//		index++;
//	}
//	if (left <= mid)
//	{
//		for (int i = 0; i <= mid - left; i++)
//		{
//			*(arr + index + i) = temp_arr[left + i];
//		}
//	}
//}
//
//void up_Merge_sort(int start, int end, int* arr)
//{
//	if (start < end)
//	{
//		int mid = (start + end) / 2;
//		up_Merge_sort(start, mid, arr);
//		up_Merge_sort(mid + 1, end, arr);
//		up_Merge(start, mid, end, arr);
//	}
//}
//
//void down_Merge(int start, int mid, int end, int* arr)
//{
//	for (int i = start; i <= end; i++)
//	{
//		temp_arr[i] = *(arr + i);
//	}
//	int left = start;
//	int right = mid + 1;
//	int index = start;
//
//	while (left <= mid && right <= end)
//	{
//		if (temp_arr[left] < temp_arr[right])
//		{
//			*(arr + index) = temp_arr[right];
//			right++;
//		}
//		else
//		{
//			*(arr + index) = temp_arr[left];
//			left++;
//		}
//		index++;
//	}
//	if (left <= mid)
//	{
//		for (int i = 0; i <= mid - left; i++)
//		{
//			*(arr + index + i) = temp_arr[left + i];
//		}
//	}
//}
//
//void down_Merge_sort(int start, int end, int* arr)
//{
//	if (start < end)
//	{
//		int mid = (start + end) / 2;
//		down_Merge_sort(start, mid, arr);
//		down_Merge_sort(mid + 1, end, arr);
//		down_Merge(start, mid, end, arr);
//	}
//}
//
//int summation(int* a, int* b, int n)
//{
//	int result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		result += a[i] * b[i];
//	}
//	return result;
//}
//
//int main(void)
//{
//	int N, i, sum = 0;
//	scanf_s("%d", &N);
//
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &A[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &B[i]);
//	}
//	up_Merge_sort(0, N - 1, A);
//	down_Merge_sort(0, N - 1, B);
//	sum = summation(A, B, N);
//
//	//printf("\n");
//	//for (i = 0; i < N; i++)
//	//{
//	//	printf("%d", A[i]);
//	//}
//	//
//	//printf("\n");
//
//	//for (i = 0; i < N; i++)
//	//{
//	//	printf("%d", B[i]);
//	//}
//	//printf("\n");
//
//	printf("%d\n", sum);
//	return 0;
//}