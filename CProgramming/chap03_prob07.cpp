//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// ���� ���� N�� �޾Ƽ� 2������ ��ȯ�Ͽ� ���
//int main()
//{
//	int N, v = 1;
//	scanf("%d", &N);
//
//	// N���� �۰ų� �����鼭 ���� ū 2�� �ŵ������� v�� ���Ѵ�.
//	while (2 * v <= N) {
//		v *= 2;
//	}
//
//	while (v > 0) {
//		if (N >= v) {
//			N = N - v;
//			printf("1");
//		}
//		else {
//			printf("0");
//		}
//		v /= 2;
//	}
//
//	printf("\n");
//}