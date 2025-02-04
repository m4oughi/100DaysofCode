#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<char> s;
    std::string str = "HELLO", reversed;

    for (char c : str) {
        s.push(c);
    }

    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    std::cout << "Reversed string: " << reversed << "\n"; // OLLEH

    return 0;
}
