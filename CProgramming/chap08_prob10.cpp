//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// ��ġ���, ��İ���
//// input.txt ���Ϸκ��� �ϳ��� ����� �Է�. ������ ù �ٿ��� �� ���� m�� n�� �־�����. ���� 100����
//// m*n ����� ���ҵ��� ��켱 ������ �Է�. ��ġ��� ���
//// �Է����� �� ����� ���� �� �� ����� �� ���
//int main()
//{
//	/*int m, n;
//	int mat[MAX][MAX];
//
//	FILE* fp = fopen("input8-10.txt", "r");
//	
//	fscanf(fp, "%d", &m);
//	fscanf(fp, "%d", &n);
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			fscanf(fp, "%d", &mat[i][j]);
//		}
//	}
//	fclose(fp);
//
//	int tmat[MAX][MAX];
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			tmat[j][i] = mat[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("%d ", tmat[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	int p, q, q2, r;
//	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
//
//	FILE* fp = fopen("input8-10.txt", "r");
//
//	fscanf(fp, "%d", &p);
//	fscanf(fp, "%d", &q);
//
//	for (int i = 0; i < p; i++) {
//		for (int j = 0; j < q; j++) {
//			fscanf(fp, "%d", &A[i][j]);
//		}
//	}
//
//	fscanf(fp, "%d", &q2);
//	fscanf(fp, "%d", &r);
//
//	for (int i = 0; i < q2; i++) {
//		for (int j = 0; j < r; j++) {
//			fscanf(fp, "%d", &B[i][j]);
//		}
//	}
//	fclose(fp);
//
//	if (q != q2) {
//		printf("Wrong size.\n");
//		return 0;
//	}
//
//	// C = AB      p*q  q*r  ==>  p*r
//	for (int i = 0; i < p; i++) {
//		for (int j = 0; j < r; j++) {
//			// compute c[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ... + A[i][q-1]*B[q-1][j]
//			C[i][j] = 0;
//			for (int k = 0; k < q; k++)
//				C[i][j] += A[i][k] * B[k][j];
//		}
//	}
//
//	for (int i = 0; i < p; i++) {
//		for (int j = 0; j < r; j++) {
//			printf("%d ", C[i][j]);
//		}
//		printf("\n");
//	}
//}