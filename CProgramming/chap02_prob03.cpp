//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 두 정수 s와 t를 입력받아 (s<=t) s에서 t사이의 정수들 중에서 2 혹은 3의 배수인 것들의 합을 계산
//// 2 혹은 3의 배수인 것들과 그렇지 않은 것들의 개수를 각각 구하여 출력
//int main()
//{
//	int s, t;
//
//	scanf("%d", &s);
//	scanf("%d", &t);
//
//	int sum = 0;
//	int count1 = 0;
//	int count2 = 0;
//
//	for (int i = s; i <= t; i++) {
//		if (i % 2 == 0 || i % 3 == 0) {
//			sum += i;
//			count1++;
//		}
//		else {
//			count2++;
//		}
//	}
//
//	printf("%d, %d, %d, %d, %d", s, t, sum, count1, count2);
//
//}