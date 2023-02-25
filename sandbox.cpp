#include <iostream>
#include <string>
using namespace std;

int main () {
    string input;
    cin >> input;
    int letter;
    cin >> letter;
    char newLetter = input[letter];
    newLetter++;
    cout << newLetter;
    cout << endl;
    return 0;
}