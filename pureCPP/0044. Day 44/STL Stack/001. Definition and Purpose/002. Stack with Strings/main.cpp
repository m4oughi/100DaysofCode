#include <iostream>
#include <stack>

int main() {
    std::stack<std::string> s;
    
    s.push("Hello");
    s.push("World");
    s.push("C++");

    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
