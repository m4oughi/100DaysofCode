#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<std::string> dq = {"apple", "banana", "cherry"};

    std::cout << "Before pop_back: ";
    for (const auto& fruit : dq) std::cout << fruit << " ";

    dq.pop_back(); // Remove "cherry"

    std::cout << "\nAfter pop_back: ";
    for (const auto& fruit : dq) std::cout << fruit << " ";

    return 0;
}
