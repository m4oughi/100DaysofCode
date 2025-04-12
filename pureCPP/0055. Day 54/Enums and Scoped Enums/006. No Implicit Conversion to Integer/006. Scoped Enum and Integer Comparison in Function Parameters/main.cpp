#include <iostream>

enum class Priority { Low = 1, Medium = 2, High = 3 };

void printPriority(Priority p) {
    if (static_cast<int>(p) > 1) {
        std::cout << "Priority is above Low\n";
    }
}

int main() {
    printPriority(Priority::High);
}
