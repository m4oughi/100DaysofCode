#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    
    if (s.empty()) {
        std::cout << "Stack is empty, cannot pop!" << std::endl;
    } else {
        s.pop();
    }

    return 0;
}
