//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// Minesweeper
//// �Է����� n*n ũ���� minesweeper ������ ����� �޴´�.
//// ��ź�� *�� ǥ�� ��ź�� �ƴ� �ڸ��� .�� ǥ��
//// ������ ��ź�� ������ ��� ���
//int main()
//{
//	int n;
//	char grid[MAX][MAX];
//
//	FILE* fp = fopen("input8-11.txt", "r");
//	fscanf(fp, "%d ", &n);  // white space
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			fscanf(fp, "%c ", &grid[i][j]);  // white space
//		}
//	}
//	fclose(fp);
//
//	int offset[][2] = { {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} };
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			// grid[i][j]�� �����̸� *�� ���,
//			// �ƴϸ� ������ ���
//			if (grid[i][j] == '*') {
//				printf("* ");
//			}
//			else {
//				int count = 0;
//				for (int dir = 0; dir < 8; dir++) {
//					int r = i + offset[dir][0];
//					int c = j + offset[dir][1];
//					if (r >= 0 && r < n && c >= 0 && c < n && grid[r][c] == '*')
//						count++;
//				}
//				printf("%d ", count);
//			}
//		}
//		printf("\n");
//	}
//
//	/*for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%c", grid[i][j]);
//		}
//		printf("\n");
//	}*/
//}