#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq;

    dq.emplace_back("Hello");
    dq.emplace_front("World");

    std::cout << "Deque elements: ";
    for (const auto& str : dq) std::cout << str << " ";

    return 0;
}
