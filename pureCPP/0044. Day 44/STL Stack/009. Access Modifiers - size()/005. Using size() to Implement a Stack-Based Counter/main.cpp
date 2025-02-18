#include <iostream>
#include <stack>

int countElements(std::stack<int> s) {
    return s.size();
}

int main() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Total elements in stack: " << countElements(s) << std::endl;

    return 0;
}
