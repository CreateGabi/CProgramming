#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#define MAX 100

// 단어 찾기
// 2차원 문자 배열을 파일로부터 읽음.
// 입력으로 하나의 문자열을 받아서 배열의 행, 열 혹은 대각선에서 찾는다.
char GetChar(int a, int b, int dir, int dist);

char grid[MAX][MAX];
int n;
char word[MAX];
int len;
int offset[][2] = { {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} };

int main()
{
	FILE* fp = fopen("input13-1.txt", "r");
	fscanf(fp, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s", &grid[i]);
	}
	fclose(fp);
	scanf("%s", word);
	len = strlen(word);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] != word[0])
				continue;
			for (int dir = 0; dir < 8; dir++) {
				int dist = 1;
				for (; dist < len; dist++) {
					char ch = GetChar(i, j, dir, dist);
					if (ch == '\0' || ch != word[dist])
						break;
				}
				if (dist >= len)
					printf("Found at %d %d %d %d.\n", i, j, dir, dist);
			}
		}
	}

	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}*/

}

char GetChar(int a, int b, int dir, int dist)
{
	//printf("%d, %d\n", a, b);
	int r = a + offset[dir][0] * dist;
	int c = b + offset[dir][1] * dist;
	
	if (r >= 0 && r < n && c >= 0 && c < n) {
		//printf("%c\n", grid[r][c]);
		return grid[r][c];
	}
	return '\0';
}