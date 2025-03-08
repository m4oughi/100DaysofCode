#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq = {"A", "B", "C"};

    std::cout << "Before assign: ";
    for (const auto& str : dq) std::cout << str << " ";
    std::cout << "\n";

    dq.assign({"X", "Y", "Z", "W"}); // Assign new values

    std::cout << "After assign({\"X\", \"Y\", \"Z\", \"W\"}): ";
    for (const auto& str : dq) std::cout << str << " ";
    std::cout << "\n";

    return 0;
}
