//#pragma warning (disable:4996)
//#include <stdio.h>
//#define MAX 100
//
//// 가장 긴 평지
//// n개의 정수를 input.txt파일로부터 입력받아 순서대로 배열에 저장
//// 연속해서 등장하는 동일한 값의 최대 개수
//// ex) 6 3 2 2 2 5 5 5 5 7 8 1 1  ->  4개
//int main()
//{
//	int data[MAX];
//	int n = 0, count = 0;
//
//	FILE* fp = fopen("input7-8.txt", "r");
//	while (fscanf(fp, "%d", &data[n]) != EOF) {
//		n++;
//	}
//	fclose(fp);
//
//	int maxLength = 0;
//	//for (int begin = 0; begin < n; begin++) {
//	//	for (int end = begin; end < n; end++) {
//	//		
//	//		int flat = 1;
//	//		for (int k = begin; k < end; k++) {
//	//			if (data[k] != data[k + 1]) {
//	//				flat = 0;
//	//				break;
//	//			}
//	//		}
//
//	//		// the inerval from begin to end is flat
//	//		// the length of the interval > maxLength
//	//		if (flat == 1 && end - begin + 1 > maxLength) {
//	//			maxLength = end - begin + 1;
//	//		}
//	//		
//	//	}
//	//}
//
//	int lengthHere = 1;
//	for (int i = 1; i < n; i++) {
//		if (data[i] == data[i - 1]) {
//			lengthHere++;
//			if (lengthHere > maxLength)
//				maxLength = lengthHere;
//		}
//		else
//			lengthHere = 1;
//	}
//
//	printf("The maxLength is %d.\n", maxLength);
//}