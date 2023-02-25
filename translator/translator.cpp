#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main () {
    cout << "Type to translate. Use - instead of spaces: ";
    // Inputs a string
    string userInput;
    cin >> userInput;
    // Finds string lengtth
    int letterTotal = userInput.length();
    // For every letter, moves up one on alphabet
    for (int currentLetter = 0; currentLetter < letterTotal; currentLetter++) {
        char newLetter = userInput[currentLetter];
        if (newLetter == '-') {
            newLetter =  ' ';
            userInput[currentLetter] = newLetter;
            cout << newLetter;
        }
        else {
            newLetter++;
            userInput[currentLetter] = newLetter;
            cout << newLetter;
        }
    }
    cout << endl;
    return 0;
}