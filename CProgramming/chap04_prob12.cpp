//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 10000000이하의 양의 정수들 중에 적어도 두 가지 서로 다른 "세제곱의 합"으로 표현될 수 있는 모든 정수를 찾아서 출력
//// K = a^3 + b^3 = c^3 + d^3이 되는 서로 다른 두 정수쌍 (a,b)와 (c,d)가 존재하는 모든 정수 K를 찾아서 출력
//// a,b,c,d는 모두 양수. 중복 출력되어도 상관없다.
//int main()
//{
//	// a<b, c<d
//	// a<c, d<b
//	for (int a = 1; a * a * a <= 10000000; a++) {
//		for (int c = a+1; c * c * c <= 10000000; c++) {
//			for (int d = c; d * d * d <= 10000000; d++) {
//				for (int b = d+1; b * b * b <= 10000000; b++) {
//					if (a * a * a + b * b * b == c * c * c + d * d * d)
//						printf("%d --- %d, %d, %d, %d\n", a*a*a + b*b*b, a, b, c, d);
//				}
//			}
//		}
//	}
//}