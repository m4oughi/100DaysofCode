#include <iostream>
#include <stack>

void clearStack(std::stack<int>& s) {
    while (!s.empty()) {
        s.pop();
    }
}

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    clearStack(s);

    std::cout << "Stack cleared! Is empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
