#include "functions.h"


int main() {
     int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int sumSquares = sumOfSquares(n);
    int factorial = findFactorial(n);

    std::cout << "Sum of squares from 1 to " << n << " is: " << sumSquares << std::endl;
    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;

    return 0;
   
   
}