#include <iostream>

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the product of two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to calculate the difference of two integers
int subtract(int a, int b) {
    return a - b;
}

// Void function to print a message
void printMessage() {
    std::cout << "Hello, this is a message from the void function!" << std::endl;
}

int main() {
    int num1 = 10;
    int num2 = 5;

    // Calling the sum function
    int sumResult = sum(num1, num2);
    std::cout << "Sum: " << sumResult << std::endl;

    // Calling the multiply function
    int multiplyResult = multiply(num1, num2);
    std::cout << "Product: " << multiplyResult << std::endl;

    // Calling the subtract function
    int subtractResult = subtract(num1, num2);
    std::cout << "Difference: " << subtractResult << std::endl;

    // Calling the void function to print a message
    printMessage();

    return 0;
}
