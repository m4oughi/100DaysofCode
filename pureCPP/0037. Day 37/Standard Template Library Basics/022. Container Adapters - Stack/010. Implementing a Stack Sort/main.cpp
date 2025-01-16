#include <iostream>
#include <stack>

void sortStack(std::stack<int>& s) {
    std::stack<int> tempStack;
    while (!s.empty()) {
        int temp = s.top();
        s.pop();

        while (!tempStack.empty() && tempStack.top() > temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    // Transfer sorted elements back to the original stack
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    std::stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);

    sortStack(s);

    std::cout << "Sorted stack (top to bottom): ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << "\n";

    return 0;
}
