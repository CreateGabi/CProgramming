//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// insert sort ��������
//// Ű����κ��� �����ؼ� �������� �Է¹޴´�. ������ �ϳ��� �Էµ� ������ ������� �Էµ� �������� ������������ ����.
//// ����ڰ� -1�� �Է��ϸ� ���α׷� ����
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