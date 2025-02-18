#include <iostream>
#include <stack>

std::string reverseString(const std::string &str) {
    std::stack<char> s;
    for (char ch : str) {
        s.push(ch);
    }

    std::string reversed;
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    
    return reversed;
}

int main() {
    std::string input = "Hello";
    std::cout << "Reversed: " << reverseString(input) << std::endl;

    return 0;
}
