#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    if (!s.empty()) {
        std::cout << "Top element: " << s.top() << std::endl;
    } else {
        std::cout << "Error: Cannot access top of an empty stack!" << std::endl;
    }

    return 0;
}
