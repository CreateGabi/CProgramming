//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// 1. 10개의 정수를 키보드로부터 입력받아 배열에 저장한 후, 합 계산
//// 2. 10개의 정수를 키보드로부터 입력받아 배열에 저장한 후, 최대값 출력
//int main()
//{
//	int sum = 0;
//	int data[10];
//
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &data[i]);
//	
//	int max = data[0];
//	for (int i = 0; i < 10; i++) {
//		sum += data[i];
//		
//		if (data[i] > max)
//			max = data[i];
//	}
//
//	printf("sum : %d\nmax : %d\n", sum, max);
//
//
//	// 데이터 복사
//	// data2 = data 불가능
//	int data2[10];
//	for (int i = 0; i < 10; i++) {
//		data2[i] = data[i];
//	}
//}