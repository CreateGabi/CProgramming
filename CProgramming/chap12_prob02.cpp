//#pragma warning (disable:4996)
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char word[50], line[100];
//	int len;
//
//	scanf("%s", word);
//	printf("The length of %s is %d.\n", word, strlen(word));
//
//	// 문자열 복사
//	strcpy(line, word);
//	printf("%s\n", line);
//
//	// 문자열 비교
//	scanf("%s", word);
//	int result = strcmp(word, line);  // == 0, > positive, < negative
//	if (result == 0)
//		printf("Equal.\n");
//	else if (result > 0)
//		printf("%s\n", word);
//	else
//		printf("%s\n", line);
//
//	// 문자열 병합
//	strcat(line, word);
//	printf("The length of %s is %d.\n", line, strlen(line));
//}