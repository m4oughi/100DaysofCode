#include <iostream>
#include <stack>
#include <vector>
#include <list>

int main() {
    std::stack<int> defaultStack; // Uses deque
    std::stack<int, std::vector<int>> vectorStack;
    std::stack<int, std::list<int>> listStack;

    defaultStack.push(10);
    vectorStack.push(20);
    listStack.push(30);

    std::cout << "Default stack size: " << defaultStack.size() << std::endl;
    std::cout << "Vector-based stack size: " << vectorStack.size() << std::endl;
    std::cout << "List-based stack size: " << listStack.size() << std::endl;

    return 0;
}
