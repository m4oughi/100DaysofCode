#include <iostream>
#include <stack>
#include <deque>

int main() {
    std::stack<int, std::deque<int>> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Top element: " << numbers.top() << "\n";
    return 0;
}
