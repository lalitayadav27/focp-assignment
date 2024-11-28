#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void playGame();
int getComputerChoice();
void determineWinner(int userChoice, int computerChoice);

int main() {
    char playAgain;

    // Seed the random number generator
    srand(time(NULL));

    do {
        playGame();
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}

void playGame() {
    int userChoice, computerChoice;

    // Display choices
    printf("Rock, Paper, Scissors Game!\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Your choice (1-3): ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please select 1, 2, or 3.\n");
        return;
    }

    // Get computer's choice
    computerChoice = getComputerChoice();

    // Display choices
    printf("You chose: %s\n", userChoice == 1 ? "Rock" : userChoice == 2 ? "Paper" : "Scissors");
    printf("Computer chose: %s\n", computerChoice == 1 ? "Rock" : computerChoice == 2 ? "Paper" : "Scissors");

    // Determine the winner
    determineWinner(userChoice, computerChoice);
}

int getComputerChoice() {
    // Randomly return 1 (Rock), 2 (Paper), or 3 (Scissors)
    return rand() % 3 + 1;
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
