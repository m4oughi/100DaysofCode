#include <iostream>
#include <deque>

int main() {
    std::deque<int> stack;

    stack.push_back(10);
    stack.push_back(20);
    stack.push_back(30);

    std::cout << "Popping elements: ";
    while (!stack.empty()) {
        std::cout << stack.back() << " ";
        stack.pop_back();
    }

    return 0;
}
