#include <iostream>
#include <stack>

int main() {
    std::string str = "Hello";
    std::stack<char> s;

    for (char ch : str) {
        s.push(ch);
    }

    std::cout << "Reversed string: ";
    while (!s.empty()) {
        std::cout << s.top();
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}
