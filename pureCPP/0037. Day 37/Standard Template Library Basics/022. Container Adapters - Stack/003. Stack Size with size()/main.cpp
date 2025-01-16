#include <iostream>
#include <stack>

int main() {
    std::stack<int> numbers;
    numbers.push(5);
    numbers.push(10);
    numbers.push(15);

    std::cout << "Stack size: " << numbers.size() << "\n";

    numbers.pop();
    std::cout << "Stack size after pop: " << numbers.size() << "\n";

    return 0;
}
