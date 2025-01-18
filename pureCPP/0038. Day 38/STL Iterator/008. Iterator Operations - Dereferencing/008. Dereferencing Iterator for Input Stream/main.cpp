#include <iostream>
#include <iterator>

int main() {
    std::cout << "Enter two numbers: ";
    std::istream_iterator<int> inputIt(std::cin);
    int a = *inputIt++; // Dereferencing to read first number
    int b = *inputIt;   // Dereferencing to read second number

    std::cout << "Sum: " << (a + b) << std::endl;

    return 0;
}
