#include <iostream>
#include <vector>

int main() {
    std::vector<int> stack;
    stack.push_back(1);
    stack.push_back(2);
    stack.push_back(3);

    while (!stack.empty()) {
        std::cout << "Top element: " << stack.back() << "\n";
        stack.pop_back();
    }
    return 0;
}
