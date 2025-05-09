// File: guess.c

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  /*
   * (1) Display the game rule
   */
  int max = 100;
  int tries = 7;

  printf("The computer will generate a number between 1 and %d\n"
         "You have %d chances.\n",
         max, tries);

  /*
   * (2) generate a secret number
   * x, f(x), f(f(x)), ...
   */
  srand(time(NULL)); // use current time as seed for random generator
  int secret = rand() % max + 1;
  printf("secret: %d\n", secret);

  while (tries > 0) {
    /*
     * (3) ask the player to enter a number
     */
    printf("Enter a number\n");

    /*
     * (4) receive the guessed number
     */
    int guess = 0;
    scanf("%d", &guess);

    /*
     * (5) compare the guessed number with the secret number
     * and inform the player of the result
     */
    if (guess == secret) {
      printf("You Win!\n");
      break;    // terminate the loop early
    } else if (guess > secret) {
      printf("guess > secret\n");
    } else {
      printf("guess < secret\n");
    }

    /*
     * (6) loop: repeat until the player wins or loses
     */
    tries--;
    // tries = tries - 1;
  }

  return 0;
}