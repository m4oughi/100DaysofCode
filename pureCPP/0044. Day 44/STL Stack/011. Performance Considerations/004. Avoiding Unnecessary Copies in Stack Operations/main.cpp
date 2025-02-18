#include <iostream>
#include <stack>

void processStack(std::stack<int>& s) {  // Pass by reference to avoid copying
    while (!s.empty()) {
        s.pop();
    }
}

int main() {
    std::stack<int> s;
    for (int i = 0; i < 100000; ++i) {
        s.push(i);
    }

    processStack(s);  // Efficient, no copies made
    std::cout << "Stack processed successfully." << std::endl;

    return 0;
}
