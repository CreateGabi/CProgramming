//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// 2-SUM
//// n개의 서로 다른 정수들을 입력. 추가로 다시 하나의 정수 k 입력.
//// n개의 정수들 중에 합이 k가 되는 서로 다른 정수쌍의 개수 출력
//int main()
//{
//	int data[MAX];
//	int n = 0, count = 0, k;
//
//	FILE* fp = fopen("input5-3.txt", "r");
//	while (fscanf(fp, "%d", &data[n]) != EOF) {
//		n++;
//	}
//	fclose(fp);
//
//	scanf("%d", &k);
//	for (int i = 0; i < n; i++) {           // data[1]=4, data[5]=8, k=12 중복 카운트
//		for (int j = i + 1; j < n; j++) {   // i < j
//			if (data[i] + data[j] == k)
//				count++;
//		}
//	}
//
//	printf("count: %d\n", count);
//}