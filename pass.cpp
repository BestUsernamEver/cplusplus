using namespace std;
#include <cstdio>
#include <iostream>

int main() {
    // set pass
    string authPass;
    cout << "Please set your password: ";
    cin >> authPass;
    cout << "\n";
    string logPass = authPass;
    // create a gap between log pass and auth pass so user doesn't see
    int timer = 1;
    while (timer <= 500){
        cout << "." << "\n";
        ++timer;
    }
    // attempt login
    cout << "Enter your password: ";
    while (true) {     
        cin >> logPass;
        // check false
        if (logPass != authPass) {
            printf("\n");
            printf("Incorrect, try again: ");
        }
        // check true
        else {
            printf("\n");
            printf("Authentication complete. Have a cookie --> (%)");
        }
    }
    return 0;
}