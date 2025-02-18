#include <iostream>
#include <stack>
#include <stdexcept>

void safePop(std::stack<int>& s) {
    if (s.empty()) {
        throw std::runtime_error("Cannot pop from an empty stack!");
    }
    s.pop();
}

int main() {
    std::stack<int> s;

    try {
        safePop(s);
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
