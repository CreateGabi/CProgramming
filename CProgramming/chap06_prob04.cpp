//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// insert sort 삽입정렬
//// 키보드로부터 연속해서 정수들을 입력받는다. 정수가 하나씩 입력될 때마다 현재까지 입력된 정수들을 오름차순으로 정렬.
//// 사용자가 -1을 입력하면 프로그램 종료
//int main()
//{
//	int data[MAX];
//	int n = 0, value;
//
//	while (1) {
//		scanf("%d", &value);
//		if (value == -1)
//			break;
//
//		int i = n - 1;
//		while (i >= 0 && data[i] > value) {
//			data[i + 1] = data[i];
//			i--;
//		}
//		data[i + 1] = value;
//		n++;
//
//		for (int i = 0; i < n; i++) {
//			printf("%d ", data[i]);
//		}
//		printf("\n");
//
//	}
//}