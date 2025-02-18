#include <iostream>
#include <stack>

void copyStack(std::stack<int> src, std::stack<int>& dest) {
    try {
        dest = src;
    } catch (...) {
        std::cout << "Exception occurred while copying the stack!" << std::endl;
    }
}

int main() {
    std::stack<int> s1;
    s1.push(5);
    s1.push(10);

    std::stack<int> s2;
    copyStack(s1, s2);

    std::cout << "Stack copied successfully!" << std::endl;

    return 0;
}
