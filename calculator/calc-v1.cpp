using namespace std;
#include <cstdio>
#include <iostream>

// First attempted calculator without tutorial/help
int main() {
    // Selection screen
    while (true) {
        printf("Select an operation by typing said number and hitting 'Enter': \n");
        printf(" ADD (1) \n SUB (2) \n MUL (3) \n DIV (4) \n");
        int input;
        cin >> input;
        // Check if addition
        if (input == 1) {
            printf("First addend: ");
            float add1;
            cin >> add1;
            printf("\n");

            printf("Second addend: ");
            float add2;
            cin >> add2;
            printf("\n");

            cout << "Sum: " << add1 + add2 << "\n\n";
        }
        // Check if subtraction
        if (input == 2) {
            printf("Minuend: ");
            float sub1;
            cin >> sub1;
            printf("\n");

            printf("Subtrahend: ");
            float sub2;
            cin >> sub2;
            printf("\n");

            cout << "Difference: " << sub1 - sub2 << "\n\n";
        }
        // Check if multiplication
        if (input == 3) {
            printf("Multiplicand: ");
            float mul1;
            cin >> mul1;
            printf("\n");

            printf("Multiplier: ");
            float mul2;
            cin >> mul2;
            printf("\n");

            cout << "Product: " << mul1 * mul2 << "\n\n";
        }
        // Check if division
        if (input == 4) {
            printf("Dividend: ");
            float div1;
            cin >> div1;
            printf("\n");

            printf("Divisor: ");
            float div2;
            cin >> div2;
            printf("\n");

            cout << "Quotient: " << div1 / div2 << "\n\n";
        } */
    return 0;
}