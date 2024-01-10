//#pragma warning (disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define CAPACITY 100
//#define BUFFER_LENGTH 100
//
//typedef struct person {   // tepedef -> renaming
//	char* name;           // struct person�� Person���� renaming
//	char* number;         // struct tag�� person�� �����ص� ����
//	char* email;
//	char* group;
//} Person;
//
//Person directory[CAPACITY]; // Person Ÿ���� �迭 directory ����
//int n = 0;    // number of peple in phone directory
//
//int compose_name(char str[], int limit);
//void load(char* fileName);
//void save(char* fileName);
//void handle_add(char* name);
//void add(char* name, char* number, char* email, char* group);
//void find(char* name);
//int search(char* name);
//void print_person(Person p);
//void status();
//void remove_(char* name);
//
//int read_line(FILE* fp, char str[], int limit)  // ���Ϸκ��� ���� ������ �б�
//{
//	int ch, i = 0;
//	while ((ch = fgetc(fp)) != '\n' && ch != EOF)
//		if (i < limit)
//			str[i++] = ch;
//	str[i] = '\0';
//	return i;
//}
//
//int main()
//{
//	char command_line[BUFFER_LENGTH];
//	char* command, * argument;
//	char name_str[BUFFER_LENGTH];
//
//	while (1) {
//		printf("$ ");
//		if (read_line(stdin, command_line, BUFFER_LENGTH) <= 0)
//			continue;
//
//		command = strtok(command_line, " ");
//
//		if (strcmp(command, "read") == 0) {
//			argument = strtok(NULL, " ");
//			if (argument == NULL) {
//				printf("Invalid arguments\n");
//				continue;
//			}
//			load(argument);
//		}
//		else if (strcmp(command, "add") == 0) {
//			if (compose_name(name_str, BUFFER_LENGTH) <= 0) {
//				printf("Name required.\n");
//				continue;
//			}
//			handle_add(name_str);
//		}
//		else if (strcmp(command, "find") == 0) {
//			if (compose_name(name_str, BUFFER_LENGTH) <= 0) {
//				printf("Name required.\n");
//				continue;
//			}
//			find(name_str);
//		}
//		else if (strcmp(command, "status") == 0) {
//			status();
//		}
//		else if (strcmp(command, "delete") == 0) {
//			if (compose_name(name_str, BUFFER_LENGTH) <= 0) {
//				printf("Invalid arguments.\n");
//				continue;
//			}
//			remove_(name_str);
//		}
//		else if (strcmp(command, "save") == 0) {
//			argument = strtok(NULL, " ");
//			if (strcmp(argument, "as") != 0) {
//				printf("Invalid arguments.\n");
//				continue;
//			}
//			argument = strtok(NULL, " ");
//			if (argument == NULL) {
//				printf("Invalid arguments.\n");
//				continue;
//			}
//			save(argument);
//		}
//		else if (strcmp(command, "exit") == 0)
//			break;
//	}
//
//	return 0;
//}
//
//int compose_name(char str[], int limit) { // ������ ��ū���� merge�Ͽ� �̸��� �����Ѵ�
//	char* ptr;
//	int length = 0;
//
//	ptr = strtok(NULL, " ");
//	if (ptr == NULL)
//		return 0;
//
//	strcpy(str, ptr);
//	length += strlen(ptr);
//
//	while ((ptr = strtok(NULL, " ")) != NULL) {
//		if (length + strlen(ptr) + 1 < limit) { // buffer�� �����÷ο� ����
//			str[length++] = ' ';
//			str[length] = '\0';
//			strcat(str, ptr);
//			length += strlen(ptr);
//		}
//	}
//	return length;
//}
//
//void load(char* fileName) {
//	char buffer[BUFFER_LENGTH];
//	char* name, * number, * email, * group;
//
//	FILE* fp = fopen(fileName, "r");
//	if (fp == NULL) {
//		printf("Open failed\n");
//		return;
//	}
//
//	while (1) {
//		if (read_line(fp, buffer, BUFFER_LENGTH) <= 0)
//			break;
//		name = strtok(buffer, "#");
//		number = strtok(NULL, "#");
//		email = strtok(NULL, "#");
//		group = strtok(NULL, "#");
//		add(name, number, email, group);
//	}
//	fclose(fp);
//}
//
//void save(char* fileName) {
//	int i;
//	FILE* fp = fopen(fileName, "w");
//	if (fp == NULL) {
//		printf("Open failed.\n");
//		return;
//	}
//
//	for (i = 0; i < n; i++) {
//		fprintf(fp, "%s#", directory[i].name);
//		fprintf(fp, "%s#", directory[i].number);
//		fprintf(fp, "%s#", directory[i].email);
//		fprintf(fp, "%s#\n", directory[i].group);
//	}
//	fclose(fp);
//}
//
//void handle_add(char* name) {
//	char number[BUFFER_LENGTH], email[BUFFER_LENGTH], group[BUFFER_LENGTH];
//	char empty[] = " ";
//
//	printf("  Phone: ");
//	read_line(stdin, number, BUFFER_LENGTH);
//
//	printf("  Email: ");
//	read_line(stdin, email, BUFFER_LENGTH);
//
//	printf("  Group: ");
//	read_line(stdin, group, BUFFER_LENGTH);
//
//	add(name, (char*)(strlen(number) > 0 ? number : empty),
//		(char*)(strlen(email) > 0 ? email : empty),
//		(char*)(strlen(group) > 0 ? group : empty));
//	// �������� �ʴ� �׸���� �ϳ��� ���鹮�ڷ� ������ ���ڿ��� ��ü
//}
//
//void add(char* name, char* number, char* email, char* group) {
//	int i = n - 1;
//	while (i >= 0 && strcmp(directory[i].name, name) > 0) {
//		directory[i + 1] = directory[i];
//		i--;
//	}
//
//	directory[i + 1].name = strdup(name);
//	directory[i + 1].number = strdup(number);
//	directory[i + 1].email = strdup(email);
//	directory[i + 1].group = strdup(group);
//
//	n++;
//}
//
//void find(char* name) {
//	int index = search(name);
//	if (index == -1)
//		printf("No person named '%s' exists.\n", name);
//	else
//		print_person(directory[index]);
//}
//
//int search(char* name) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (strcmp(name, directory[i].name) == 0) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//void print_person(Person p) {
//	printf("%s:\n", p.name);
//	printf("  Phone: %s\n", p.number);
//	printf("  Email: %s\n", p.email);
//	printf("  Group: %s\n", p.group);
//}
//
//void status() {
//	int i;
//	for (i = 0; i < n; i++)
//		print_person(directory[i]);
//	printf("Total %d persons.\n", n);
//}
//
//void remove_(char* name) {
//	int index = search(name);
//	if (index == -1) {
//		printf("No person named '%s' exists.\n", name);
//		return;
//	}
//
//	int j = index;
//	for (; j < n - 1; j++) {      // ����� ä��� ��ĭ�� ������
//		directory[j] = directory[j + 1];
//	}
//	n--;
//	printf("'%s' was deleted successfully.\n", name);
//}
