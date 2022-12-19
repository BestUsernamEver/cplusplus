using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>

int main() {
    while (true) {
        // declare random numbers
        int x = rand() % 100;
        int y = rand() % 100;
        int input;
        // ask expression
        printf("%i + %i\n\n", x, y);
        cin >> input;
        cout << "\n";
        // if wrong
        if (input != x + y) {
            printf("Incorrect.\n\n");
            sleep(5);
        }
        // if right
        else {
            printf("Correct!\n\n");
            sleep(5);
        }
    }
}