//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 1~N 사이의 정수들 중에서 서로 약수-배수 관계인 정수 쌍의 개수를 계산해 출력
//// (a,b)와 (b,a)는 같은 쌍으로 간주하고 (a,a)는 카운트하지 않음
//int main()
//{
//	int count = 0;
//	int N;
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = i+1; j <= N; j++) {  // i<j
//			if (j % i == 0) {
//				count++;
//			}
//		}
//	}
//
//	printf("%d", count);
//}