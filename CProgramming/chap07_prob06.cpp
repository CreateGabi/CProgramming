//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// 2-SUM
//// n���� ���� �ٸ� �������� �Է�. �߰��� �ٽ� �ϳ��� ���� k �Է�.
//// n���� ������ �߿� ���� k�� �Ǵ� ���� �ٸ� �������� ���� ���
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
//	for (int i = 0; i < n; i++) {           // data[1]=4, data[5]=8, k=12 �ߺ� ī��Ʈ
//		for (int j = i + 1; j < n; j++) {   // i < j
//			if (data[i] + data[j] == k)
//				count++;
//		}
//	}
//
//	printf("count: %d\n", count);
//}