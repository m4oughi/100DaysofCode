#include <iostream>
#include <vector>

int main() {
    std::vector<int> stack;

    stack.push_back(100);
    stack.push_back(200);
    stack.push_back(300);

    std::cout << "Stack after pushes:" << std::endl;
    for (int num : stack) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    stack.pop_back();
    std::cout << "Stack after one pop:" << std::endl;
    for (int num : stack) {
        std::cout << num << " ";
    }

    return 0;
}
