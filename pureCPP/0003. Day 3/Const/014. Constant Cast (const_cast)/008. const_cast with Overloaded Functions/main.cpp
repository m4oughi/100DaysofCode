#include <iostream>

void process(int& value) {
    std::cout << "Non-const version: " << value << std::endl;
}

void process(const int& value) {
    std::cout << "Const version: " << value << std::endl;
}

int main() {
    int num = 25;
    const int& constNum = num;

    process(const_cast<int&>(constNum)); // Calls non-const version
}
