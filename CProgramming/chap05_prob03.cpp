//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// ������ ���� input.txt�� ����� �������� �Է� �޾� ������� �迭�� �����Ѵ�. �׷� ���� Ű����κ��� �� �ϳ��� ������ �Է¹޾� �� ������ �迭�� ������ �迭 �ε�����, ������ -1�� ���
//// ���Ͽ� ����� ������ ������ 100���� ���� �ʴ´�.
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