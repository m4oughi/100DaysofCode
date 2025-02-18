#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    // Pushing elements
    for (int i = 0; i < 1000000; ++i) {
        s.push(i);
    }

    // Popping elements
    while (!s.empty()) {
        s.pop();
    }

    std::cout << "Push and pop operations completed successfully." << std::endl;

    return 0;
}
