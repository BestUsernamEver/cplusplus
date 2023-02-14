#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int cpuNumber;
  int playerGuess;
  int guessCount = 0;

  srand(time(NULL));
  cpuNumber = rand() % 100 + 1;
  printf("Guess a number between 1 - 100.\n");

  while (playerGuess != cpuNumber) {
    cin >> playerGuess;
    if (playerGuess == cpuNumber) {
      printf("Correct, the number was %i! You guessed %i times!\n", cpuNumber, guessCount);
    }
    if (playerGuess < cpuNumber) {
      printf("Incorrect, the number is higher.\n");
    }
    if (playerGuess > cpuNumber) {
      printf("Incorrect, the number is lower.\n");
    }
  }
  return 0;
}