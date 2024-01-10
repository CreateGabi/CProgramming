//#pragma warning (disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//#define BUFFER_SIZE 10
//
//int ReadLine(char str[], int limit);
//int ReadLineWithCompression(char compressed[], int limit);
//
//int main()
//{
//	//char buffer[BUFFER_SIZE];
//	//int k;
//
//	//while (1) {
//	//	printf("$ ");
//	//	
//	//	//scanf("%s", buffer);
//	//	//gets_s(buffer);
//	//	//fgets(buffer, BUFFER_SIZE, stdin);
//	//	k = ReadLine(buffer, BUFFER_SIZE);
//	//	
//	//	printf("%s:%d\n", buffer, strlen(buffer));
//	//}
//
//	char line[80];
//	while (1) {
//		printf("$ ");
//		int length = ReadLineWithCompression(line, 80);
//		printf("%s:%d\n", line, length);
//	}
//}
//
//int ReadLineWithCompression(char compressed[], int limit)
//{
//	int ch, i = 0;
//	while ((ch = getchar()) != '\n') {
//		if (i < limit - 1 && (!isspace(ch) || i > 0 && !isspace(compressed[i - 1])))
//			compressed[i++] = ch;
//	}
//	if (i > 0 && isspace(compressed[i - 1]))
//		i--;
//	compressed[i] = '\0';
//	return i;
//}
//
//int ReadLine(char str[], int limit)
//{
//	int ch, i = 0;
//	while ((ch = getchar()) != '\n')
//		if (i < limit - 1)
//			str[i++] = ch;
//	str[i] = '\0';
//	return i;
//}