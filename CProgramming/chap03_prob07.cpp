//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 양의 정수 N을 받아서 2진수로 변환하여 출력
//int main()
//{
//	int N, v = 1;
//	scanf("%d", &N);
//
//	// N보다 작거나 같으면서 가장 큰 2의 거듭제곱수 v를 구한다.
//	while (2 * v <= N) {
//		v *= 2;
//	}
//
//	while (v > 0) {
//		if (N >= v) {
//			N = N - v;
//			printf("1");
//		}
//		else {
//			printf("0");
//		}
//		v /= 2;
//	}
//
//	printf("\n");
//}