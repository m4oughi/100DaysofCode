#include <iostream>
#include <list>

int main() {
    std::list<int> stack;

    stack.push_front(1);
    stack.push_front(2);
    stack.push_front(3);

    std::cout << "Stack top: " << stack.front() << std::endl;

    stack.pop_front();  // Removing top element (LIFO)

    std::cout << "Stack top after pop: " << stack.front() << std::endl;

    return 0;
}
