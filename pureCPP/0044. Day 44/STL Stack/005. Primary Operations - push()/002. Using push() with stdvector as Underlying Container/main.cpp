#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::stack<int, std::vector<int>> s;

    s.push(5);
    s.push(15);
    s.push(25);

    std::cout << "Top element: " << s.top() << std::endl; // 25

    return 0;
}
