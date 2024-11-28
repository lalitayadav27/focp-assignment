#include <stdio.h>
#include <string.h>

#define MAX_TRIES 3
#define WORD_LENGTH 20

void displayWord(char word[], char guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i] == 1) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char word[WORD_LENGTH] = "hangman"; 
    char guessed[WORD_LENGTH] = {0}; 
    int chances = MAX_TRIES; 
    char guess;
    int correctGuess;

    printf("Welcome to Hangman Game!\n");
    printf("You have %d chances to guess the word.\n", MAX_TRIES);

    while (chances > 0) {
        printf("\nCurrent word: ");
        displayWord(word, guessed);

        printf("Enter your guess (a single letter): ");
        scanf(" %c", &guess); 

        correctGuess = 0; 
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                guessed[i] = 1; 
                correctGuess = 1; 
            }
        }

        if (correctGuess) {
            printf("Good guess!\n");
        } else {
            chances--; 
            printf("Wrong guess! You have %d chances left.\n", chances);
        }
        int allGuessed = 1;
        for (int i = 0; i < strlen(word); i++) {
            if (guessed[i] == 0) {
                allGuessed = 0; 
                break;
            }
        }

        if (allGuessed) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            break;
        }
    }

    if (chances == 0) {
        printf("Sorry, you've run out of chances! The word was: %s\n", word);
    }

    return 0;
}

