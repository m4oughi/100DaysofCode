#include <iostream>

class SequenceGenerator {
public:
    static int getNextNumber() {
        static int currentNumber = 0;  // Static variable inside the function
        return ++currentNumber;
    }
};

int main() {
    std::cout << "Next number: " << SequenceGenerator::getNextNumber() << std::endl;
    std::cout << "Next number: " << SequenceGenerator::getNextNumber() << std::endl;
    std::cout << "Next number: " << SequenceGenerator::getNextNumber() << std::endl;

    return 0;
}
