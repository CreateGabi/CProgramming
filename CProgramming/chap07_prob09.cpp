//#pragma warning (disable:4996)
//#include <stdio.h>
//
//// Coupon collector
//// 0~5 ������ �������� Ű����κ��� �����ؼ� �Է� �ߺ�����
//// 0~5������ ��� �������� ���� ��� �� �� �̻� �ԷµǸ� �׶����� �Էµ� ������ ���� ���
//// ex) 5 5 2 2 1 0 0 2 5 2 3 4  ->  12
//int main()
//{
//	int flag[6] = { 0 };  // flag[i] == 0 means i X, flag[i] == 1 means i O
//
//	int k, count = 0, n = 0;
//	while (count < 6) {
//		scanf("%d", &k);
//		n++;
//		if (k >= 0 && k <= 5 && flag[k] == 0){
//			flag[k] = 1;
//			count++;
//		}
//		
//		// count the number of flags
//		/*if count == 6
//			break;*/
//	}
//
//	printf("The count is %d.\n", n);
//}