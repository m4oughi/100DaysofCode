#include <iostream>

void print() {
    std::cout << "No more arguments" << std::endl;
}

template<typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << " ";
    print(args...);  // Recursive call with reduced arguments
}

int main() {
    print(1, 2.5, "Hello", 'A');
    print("Recursion", "with", "variadic", "templates");

    return 0;
}
