#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    
    if (s.empty()) {
        std::cout << "Stack is empty!\n";
    }

    s.push(100);
    
    if (!s.empty()) {
        std::cout << "Stack is not empty!\n";
    }

    return 0;
}
