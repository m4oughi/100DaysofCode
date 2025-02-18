#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    std::cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    s.push(42);
    std::cout << "After pushing, is stack empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
