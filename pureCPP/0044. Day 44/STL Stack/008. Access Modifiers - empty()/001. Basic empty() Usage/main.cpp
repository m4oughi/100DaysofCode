#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    if (s.empty()) {
        std::cout << "Stack is empty!" << std::endl;
    } else {
        std::cout << "Stack is not empty!" << std::endl;
    }

    return 0;
}
