#include <iostream>

void recursiveFunction(int count) {
    if (count > 100000) {
        std::cout << "Reached max depth, stopping recursion.\n";
        return;
    }
    recursiveFunction(count + 1);
}

int main() {
    try {
        recursiveFunction(1);
    } catch (...) {
        std::cout << "Stack overflow detected!" << std::endl;
    }
    return 0;
}
