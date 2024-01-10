//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// 데이터 파일 input.txt에 저장된 정수들을 입력 받아 순서대로 배열에 저장한다. 그런 다음 키보드로부터 또 하나의 정수를 입력받아 그 정수가 배열에 있으면 배열 인덱스를, 없으면 -1을 출력
//// 파일에 저장된 정수의 개수는 100개를 넘지 않는다.
//int main()
//{
//	int data[MAX];
//	int n = 0;
//
//	FILE* fp = fopen("input5-3.txt", "r");
//	while (fscanf(fp, "%d", &data[n]) != EOF) 
//		n++;
//	fclose(fp);
//
//	int target;
//	scanf("%d", &target);
//
//	int i = 0;
//	for (; i < n && data[i] != target; i++) {}
//	if (i < n)
//		printf("%d", i);
//	else
//		printf("-1");
//
//}