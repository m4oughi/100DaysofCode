#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::stack<int, std::vector<int>> s; // Using vector

    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Top element: " << s.top() << std::endl; // 3

    return 0;
}
