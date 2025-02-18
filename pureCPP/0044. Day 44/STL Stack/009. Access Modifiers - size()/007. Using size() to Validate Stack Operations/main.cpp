#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    if (s.size() == 0) {
        std::cout << "Stack is empty, cannot pop or access top element!" << std::endl;
    }

    s.push(42);
    std::cout << "Stack size after push: " << s.size() << std::endl;

    return 0;
}
