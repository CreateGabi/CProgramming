//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// bubble sort
//// input.txt ���Ͽ��� �������� �Է¹޾� ������� �迭�� ����. �������� ����
//int main()
//{
//	int data[MAX];
//	int n = 0;
//
//	FILE* fp = fopen("input5-3.txt", "r");
//	while (fscanf(fp, "%d", &data[n]) != EOF) {
//		n++;
//	}
//	fclose(fp);
//
//	/* bubble sort */
//	for (int i = n - 1; i > 1; i--) {
//		// find the max between data[0] and data[i]
//		// place it at dat[i]
//
//		for (int j = 0; j < i; j++) {
//			if (data[j] > data[j + 1]) {
//				// swap data[j] and data[j+1]
//				int tmp = data[j];
//				data[j] = data[j + 1];
//				data[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//		printf("%d ", data[i]);
//	printf("\n");
//}