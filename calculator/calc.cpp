using namespace std;
#include <cstdio>
#include <iostream>
#include <unistd.h> 

enum Operation
{
    Addition,
    Subtraction,
    Multiplication,
    Division
};

int main()
{
    while (true)
    {
        int x, y;
        // Selection screen
        printf("Select an operation by typing said number and hitting 'Enter': \n");
        printf(" ADD (1) \n SUB (2) \n MUL (3) \n DIV (4) \n");
        // Input option
        int input;
        cin >> input;
        printf("Enter two integers:\n");
        cin >> x;
        printf("%i", x);
        cin >> y;
        printf("%i", y);
        // stupid
        switch (input)
        {
        case 1:
            printf("%i\n", x + y);
            break;
        case 2:
            printf("%i\n", x - y);
            break;
        case 3:
            printf("%i\n", x * y);
            break;
        case 4:
            printf("%i\n", x / y);
            break;
        default:
            printf("Please try again.\n");
            break;
        }
        sleep(3);
    }
    return 0;
}