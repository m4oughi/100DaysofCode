#include <iostream>

enum Level { Low = 1, Medium = 2, High = 3 };

int main() {
    Level lvl = Medium;
    int priority = lvl + 5; // Implicit conversion allows arithmetic
    std::cout << "Priority: " << priority << std::endl;
}
