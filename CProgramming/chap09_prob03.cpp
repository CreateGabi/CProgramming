//#pragma warning (disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// Guessing Game
//void InitializeRandomGenerator();
//void ChooseSecretNumber();
//void play(int selected_number);
//
//int selected_number;  // global variable
//
//int main()
//{
//	char ch;
//	InitializeRandomGenerator();
//	printf("Welcome...\n");
//
//	while (1) {
//		ChooseSecretNumber();
//
//		play(selected_number);
//		printf("Play again?");
//		scanf(" %c", &ch);
//		if (ch != 'y' && ch != 'Y')
//			break;
//	}
//}
//
//void play(int selected_number)
//{
//	int guessed_number;
//	int count = 0;
//	while (1) {
//		printf("Guess number : ");
//		scanf("%d", &guessed_number);
//		count++;
//		if (guessed_number < selected_number) {
//			printf("Too low...\n");
//		}
//		else if (guessed_number > selected_number) {
//			printf("Too high...\n");
//		}
//		else {
//			printf("You won in %d guesses.\n", count);
//			break;
//		}
//	}
//}
//
//void ChooseSecretNumber()
//{
//	selected_number = rand() % 100 + 1;
//}
//
//void InitializeRandomGenerator()
//{
//	srand((unsigned int)time(NULL));
//}