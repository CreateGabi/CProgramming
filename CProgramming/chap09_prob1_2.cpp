//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 1. 사용자로부터 두 정수 a와 b를 받은 후 a^b 계산. 단 b는 음이 아닌 정수
//// 2. 1에서 100000 사이의 소수 개수
//int isPrime(int n);
//
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100000; i++) {
//		if (isPrime(i) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//}
//
//int isPrime(int n)
//{
//	if (n <= 1)
//		return 0;
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}