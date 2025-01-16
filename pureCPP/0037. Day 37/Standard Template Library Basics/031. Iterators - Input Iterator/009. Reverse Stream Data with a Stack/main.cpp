#include <iostream>
#include <iterator>
#include <stack>

int main() {
    std::cout << "Enter integers (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;

    std::stack<int> reversed;
    while (inputIt != end) {
        reversed.push(*inputIt++);
    }

    std::cout << "Reversed order: ";
    while (!reversed.empty()) {
        std::cout << reversed.top() << " ";
        reversed.pop();
    }

    std::cout << "\n";
    return 0;
}
