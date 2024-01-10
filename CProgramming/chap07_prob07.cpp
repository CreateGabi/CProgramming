//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// 최대 부분합
//// 입력으로 n개의 정수, 1개 이상의 연속된 정수들을 더하여 구할 수 있는 최대값
//int main()
//{
//	int data[MAX];
//	int n = 0, count = 0;
//
//	FILE* fp = fopen("input5-3.txt", "r");
//	while (fscanf(fp, "%d", &data[n]) != EOF) {
//		n++;
//	}
//	fclose(fp);
//
//	int maxSum = data[0];
//	int maxBegin = 0, maxEnd = 0;
//	for (int begin = 0; begin < n; begin++) {
//		int sum = 0;
//		for (int end = begin; end < n; end++) {
//			// calculate the sum from data[begin] to data[end]
//			// if the sum > max, max = the sum
//			sum += data[end];
//
//			if (sum > maxSum) {
//				maxSum = sum;
//				maxBegin = begin;
//				maxEnd = end;
//			}
//		}
//	}
//
//	printf("The max is %d from %d to %d.\n", maxSum, maxBegin, maxEnd);
//}