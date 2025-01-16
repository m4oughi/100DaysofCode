#include <iostream>
#include <stack>

int main() {
    std::stack<int> numbers;

    if (numbers.empty()) {
        std::cout << "The stack is empty.\n";
    }

    numbers.push(100);
    std::cout << "After pushing, is the stack empty? " << (numbers.empty() ? "Yes" : "No") << "\n";

    return 0;
}
