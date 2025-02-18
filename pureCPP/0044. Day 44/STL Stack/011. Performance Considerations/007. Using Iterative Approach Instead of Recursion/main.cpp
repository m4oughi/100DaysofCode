#include <iostream>
#include <stack>

void iterativeFunction(int maxDepth) {
    std::stack<int> s;
    for (int i = 1; i <= maxDepth; ++i) {
        s.push(i);
    }
}

int main() {
    iterativeFunction(100000);  // Avoids stack overflow
    std::cout << "Iterative function executed successfully." << std::endl;
    return 0;
}
