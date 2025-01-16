#include <iostream>
#include <stack>

int main() {
    std::stack<int> numbers;

    // Pushing elements onto the stack
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    // Accessing the top element
    std::cout << "Top element: " << numbers.top() << "\n";

    // Popping the top element
    numbers.pop();
    std::cout << "Top element after pop: " << numbers.top() << "\n";

    return 0;
}
