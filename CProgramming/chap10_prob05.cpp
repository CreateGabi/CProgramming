//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// n���� ���� �ƴ� �� �ڸ� �������� �Է¹޾� �迭�� ������� ����
//// ������ 6�ڸ� �̳��� ���ӵ� ���ڸ� �ϳ��� ������ ȯ������ �� �Ҽ��� �Ǵ� ��� ��츦 ã�Ƽ� �Ҽ����� ���
//int ConvertToInt(int data[], int s, int t);
//int IsPrime(int k);
//void PrintPrimesStartAt(int s, int data[]);
//
//int main()
//{
//	int n = 0;
//	int data[MAX];
//
//	FILE* fp = fopen("input10-5.txt", "r");
//	while (fscanf(fp, "%d", &data[n]) != EOF) n++;
//	fclose(fp);
//
//	for (int i = 0; i < n; i++) {
//		//for (int j = i; j < n && j < i + 6; j++) {
//		//	int value = ConvertToInt(data, i, j);
//		//	// convert data[i],...,data[j] into integer
//		//	// test if prime, 
//		//	if (IsPrime(value) == 1)
//		//		printf("%d\n", value);
//		//}
//		PrintPrimesStartAt(i, data);
//	}
//}
//
//void PrintPrimesStartAt(int s, int data[])
//{
//	int value = 0;
//	for (int i = 0; i < 6; i++) {
//		value = value * 10 + data[s + i];
//		if (IsPrime(value) == 1) printf("%d\n", value);
//	}
//}
//
//// convert data[s],...,data[t] into integer
//int ConvertToInt(int data[], int s, int t)
//{
//	// 1 4 2 0 9 ==> 14209
//	int value = 0;
//	for (int i = s; i <= t; i++)
//		value = value * 10 + data[i];
//	return value;
//}
//
//int IsPrime(int k)
//{
//	if (k <= 1) return 0;
//	for (int i = 2; i * i <= k; i++)
//		if (k % i == 0) return 0;
//	return 1;
//}