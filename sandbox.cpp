#include <iostream>
#include <array>
#include <numeric>
using namespace std;

// Checks if the number inputed is one of numbers in array, array set to 1-10
int main () {
    int input;
    array<int, 10> array;
    int start = 1;
    iota(begin(array), end(array), start);
    cin >> input;
    for (int &i: array) {
        if (input != i) {
            cout << "invalid" << " ";
        }
    }
}