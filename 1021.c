//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int deque[30000];
//int list[100];
//
//int main(void)
//{
//    int N, M, i, j, front, back, left = 0, right = 0, count = 0;
//    scanf("%d%d", &N, &M);
//    front = 15000;
//    back = 15000;
//    for (i = 0; i < M; i++)
//    {
//        scanf("%d", &list[i]);
//    }
//    for (i = front; i < front + N; i++)
//    {
//        deque[i] = i - front + 1;
//        back++;
//    }
//    for (i = 0; i < M; i++)
//    {
//        for (j = front; j < back; j++)
//        {
//            if (list[i] == deque[j])
//            {
//                left = j - front;
//                right = back - j - 1;
//                break;
//            }
//        }
//        if (left >= (right + 1))
//        {
//            for (j = 0; j <= right; j++)
//            {
//                back--;
//                front--;
//                deque[front] = deque[back];
//                deque[back] = 0;
//                count++;
//            }
//            deque[front] = 0;
//            front++;
//        }
//        else
//        {
//            for (j = 0; j < left; j++)
//            {
//                deque[back] = deque[front];
//                deque[front] = 0;
//                back++;
//                front++;
//                count++;
//            }
//            deque[front] = 0;
//            front++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}