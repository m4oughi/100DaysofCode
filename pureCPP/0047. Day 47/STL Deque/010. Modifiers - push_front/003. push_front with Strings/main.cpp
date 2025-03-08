#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<std::string> dq;

    dq.push_front("world");
    dq.push_front("hello");

    std::cout << "Deque elements: ";
    for (const auto& word : dq) {
        std::cout << word << " ";
    }

    return 0;
}
