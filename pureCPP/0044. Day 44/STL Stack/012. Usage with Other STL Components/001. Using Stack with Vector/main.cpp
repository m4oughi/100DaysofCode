#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::stack<int, std::vector<int>> s(vec); // Stack initialized from vector

    std::cout << "Stack elements (top to bottom): ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
