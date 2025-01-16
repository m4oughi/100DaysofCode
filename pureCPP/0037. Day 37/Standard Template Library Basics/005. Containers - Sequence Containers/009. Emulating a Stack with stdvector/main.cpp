#include <iostream>
#include <vector>

int main() {
    std::vector<int> stack;
    stack.push_back(10);
    stack.push_back(20);
    stack.push_back(30);

    while (!stack.empty()) {
        std::cout << stack.back() << " ";
        stack.pop_back();
    }
    return 0;
}
