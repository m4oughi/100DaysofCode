#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq = {"B", "C", "D"};

    std::cout << "Before emplace: ";
    for (const auto& s : dq) std::cout << s << " ";
    std::cout << "\n";

    dq.emplace(dq.begin(), "A"); // Insert at the front

    std::cout << "After emplace at beginning: ";
    for (const auto& s : dq) std::cout << s << " ";
    std::cout << "\n";

    return 0;
}
