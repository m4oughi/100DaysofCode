#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::stack<int, std::vector<int>> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top before pop: " << s.top() << std::endl;
    s.pop();
    std::cout << "Top after pop: " << s.top() << std::endl;

    return 0;
}
