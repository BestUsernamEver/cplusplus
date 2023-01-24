#include <iostream>
#include <cstdio>
#include <string>

float add(int x, int y) {
    printf("%i + %i = %i", x, y, x+y);
}

float subtract(int x, int y) {
    printf("%i - %i = %i", x, y, x*y);
}

float multiply(int x, int y) {
    printf("%i x %i = %i", x, y, x+y);
}

float divide(int x, int y) {
    printf("%i / %i = %i", x, y, x+y);
}


int main() {
    int x;
    int y;
    char operation;
    
    printf("-- Calculator --  \n\n");
    
    printf("Type an operation --> [ + - * / ]\n");

    std::cin >> operation;

    if (operation == '+') {
        printf("Enter the first number: ");
        std::cin >> x;
        printf("\n");
        
        printf("Enter the second number: ");
        std::cin >> y;
        printf("\n");
        
        add(x, y);
    }

    if (operation == '-') {
        printf("Enter the first number: ");
        std::cin >> x;
        printf("\n");
        
        printf("Enter the second number: ");
        std::cin >> y;
        printf("\n");
        
        subtract(x, y);
    }

    if (operation == '*') {
        printf("Enter the first number: ");
        std::cin >> x;
        printf("\n");
        
        printf("Enter the second number: ");
        std::cin >> y;
        printf("\n");
        
        multiply(x, y);
    }

    if (operation == '/') {
        printf("Enter the first number: ");
        std::cin >> x;
        printf("\n");
        
        printf("Enter the second number: ");
        std::cin >> y;
        printf("\n");
        
        divide(x, y);
    }
}