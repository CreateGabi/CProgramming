//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 1~100000 사이의 모든 소수
//int main()
//{
//	/*for (int i = 2; i <= 100000; i++) {
//
//		int prime = 1;
//		for (int j = 2; prime == 1 && j <= i / 2; j++) {
//			if (i % j == 0) {
//				prime = 0;
//			}
//		}
//
//		if (prime == 1) {
//			printf("%d\n", i);
//		}
//	}*/
//
//	for (int i = 2; i <= 100000; i++) {
//
//		int j = 2;
//		while (j * j <= i && i % j != 0)
//			j++;
//		if (j * j > i)
//			printf("%d\n", i);
//	}
//}