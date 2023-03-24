#include <iostream>
#include <cstdio>
using namespace std;

// Addition function
float add(float x, float y)
{
    cout << x + y << endl;
    return 0;
}
// Subtraction function
float sub(float x, float y)
{
    cout << x - y << endl;
    return 0;
}
// Multiplication function
float mul(float x, float y)
{
    cout << x * y << endl;
    return 0;
}
// Division function
float divi(float x, float y)
{
    cout << x / y << endl;
    return 0;
}

int main()
{
    float num1;
    float num2;
    char operation;

    while (true)
    {
        // Two operands
        printf("Enter two numbers:\n");
        cin >> num1;
        cin >> num2;
        cout << endl;
        
        // Selects an operation from the four characters
        printf("Enter an operation: [ + - * / ]\n");
        cin >> operation;
        cout << endl;
        
        printf("Answer: ");
        // Calls addition function
        if (operation == '+')
        {
            add(num1, num2);
        }
        // Calls subtraction function
        if (operation == '-')
        {
            sub(num1, num2);
        }
        // Calls multiplication function
        if (operation == '*')
        {
            mul(num1, num2);
        }
        // Calls division function
        if (operation == '/')
        {
            divi(num1, num2);
        }
        cout << endl;
    }
    return 0;
}