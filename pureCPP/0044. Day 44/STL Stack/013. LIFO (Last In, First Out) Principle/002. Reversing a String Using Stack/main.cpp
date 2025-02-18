#include <iostream>
#include <stack>

void reverseString(const std::string& str) {
    std::stack<char> s;
    for (char ch : str) {
        s.push(ch);
    }

    std::cout << "Reversed String: ";
    while (!s.empty()) {
        std::cout << s.top();
        s.pop();
    }
}

int main() {
    std::string str = "HELLO";
    reverseString(str);
    return 0;
}
