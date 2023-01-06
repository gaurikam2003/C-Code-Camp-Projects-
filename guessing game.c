#include <stdio.h>
#include <stdlib.h>

int main(){

    int secretNumber = 5;
    int userGuess;
    int userGuessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(userGuess != secretNumber && outOfGuesses == 0){
        if (userGuessCount < guessLimit){
        printf("Enter a number: ");
        scanf("%d", &userGuess);
        userGuessCount++;
        }
        else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1){
        printf("Out of guesses");
    }
    else {
        printf("You have guessed the number!");
    }
    return 0;
}

