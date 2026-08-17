# include <stdio.h>
// c practical assignment 34 : name: Adwal Gomes, UID:2605035 , Roll No: 34
int main() {
    int secret_number = 42; // The secret number to guess
    int guess;
    int attempts = 0; // Counter for the number of attempts
     do {
        printf("Guess the secret number (between 1 and 100): "); // Prompt the user for input
        scanf("%d", &guess);
        fflush(stdin); // Clear the input buffer
        attempts++; // Increment the attempts counter

        if (guess < secret_number) { // Check if the guess is too low
            printf("Too low! Buddy.\n");
        } else if (guess > secret_number) { // Check if the guess is too high
            printf("Too high! Try going lower.\n");
       } else {
            printf("Congratulations! You guessed the secret number %d in %d attempts.\n", secret_number, attempts);
        }
        
     } while (guess != secret_number);
     printf("Game over. You made %d attempts.\n", attempts);  // Print the total number of attempts made       
    return 0;
}