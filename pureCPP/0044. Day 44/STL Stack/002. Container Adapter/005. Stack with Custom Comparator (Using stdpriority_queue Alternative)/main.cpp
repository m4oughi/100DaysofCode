#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values = {3, 1, 4, 1, 5, 9};
    
    std::sort(values.begin(), values.end()); // Sort first
    std::stack<int, std::vector<int>> sortedStack(values); // Initialize stack with sorted values

    while (!sortedStack.empty()) {
        std::cout << sortedStack.top() << " ";
        sortedStack.pop();
    }

    return 0;
}
