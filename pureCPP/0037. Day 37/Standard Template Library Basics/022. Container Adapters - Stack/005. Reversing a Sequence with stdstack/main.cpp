#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::stack<int> s;

    for (int num : nums) {
        s.push(num); // Pushing elements onto the stack
    }

    std::cout << "Reversed sequence: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << "\n";

    return 0;
}
