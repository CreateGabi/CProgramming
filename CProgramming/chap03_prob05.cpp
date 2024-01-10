//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 입력으로 하나의 양수 정수 N을 받은 후 각 자리수의 합을 구하여 출력
//// 입력으로 하나의 양수 정수 N을 받은 후 2진수로 변환했을 때 1의 개수 출력
//int main()
//{
//	int count = 0, sum = 0, N;
//	scanf("%d", &N);
//
//	// N = 1234
//	// N % 10 = 4
//	// N / 10 = 123,   123 % 10 = 3
//	// N / 10 = 12,    12 % 10 = 2
//	// N / 10 = 1,     1 % 10 = 1
//	// N / 10 = 0
//
//	/*while (N > 0) {
//		sum += (N % 10);
//		N = N / 10;
//	}
//	printf("sum : %d\n", sum);*/
//
//	while (N > 0) {
//		count += (N % 2);
//		N = N / 2;
//	}
//	printf("count : d", count);
//	
//}
