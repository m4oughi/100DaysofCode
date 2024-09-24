#include <iostream>
#include <cstdarg>

void printNumbers(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        std::cout << num << " ";
    }
    
    va_end(args);
    std::cout << std::endl;
}

int main() {
    printNumbers(3, 1, 2, 3);
    printNumbers(5, 10, 20, 30, 40, 50);

    return 0;
}
