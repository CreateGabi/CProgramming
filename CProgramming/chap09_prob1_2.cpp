//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 1. ����ڷκ��� �� ���� a�� b�� ���� �� a^b ���. �� b�� ���� �ƴ� ����
//// 2. 1���� 100000 ������ �Ҽ� ����
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