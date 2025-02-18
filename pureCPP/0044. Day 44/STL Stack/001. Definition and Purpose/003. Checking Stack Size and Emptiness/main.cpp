#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    std::cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    s.push(100);
    s.push(200);

    std::cout << "Stack size: " << s.size() << std::endl;
    
    return 0;
}
