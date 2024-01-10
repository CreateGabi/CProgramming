//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// bubble sort
//// n개의 정수를 읽고 정렬하는 프로그램
//void Bubblesort(int n, int data[]);
//void swap(int a, int b);
//
//int main()
//{
//	int n = 0;
//	int data[MAX];
//
//	FILE* fp = fopen("input10-4.txt", "r");
//
//	while (fscanf(fp, "%d", &data[n]) != EOF) n++;
//	fclose(fp);
//
//	Bubblesort(n, data);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", data[i]);
//	}
//	printf("\n");
//}
//
//void Bubblesort(int n, int data[])
//{
//	for (int i = n - 1; i > 0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (data[j] > data[j + 1]) {
//				//swap(data[j], data[j + 1]);
//				int tmp = data[j];
//				data[j] = data[j + 1];
//				data[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void swap(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}