#include <iostream>

// Inline function to double a number
inline int doubleValue(int x) {
    return x * 2;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    for (int value : values) {
        std::cout << "Double of " << value << " is " << doubleValue(value) << std::endl;
    }
    return 0;
}
