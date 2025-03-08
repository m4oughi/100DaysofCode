#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq;

    dq.emplace_front("Hello");
    dq.emplace_back("World");
    dq.emplace_back("!");

    std::cout << "Deque elements: ";
    for (const auto& str : dq) std::cout << str << " ";

    return 0;
}
