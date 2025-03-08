#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq = {"B", "C", "D"};

    // Insert at the beginning
    dq.insert(dq.begin(), "A");

    // Insert at the end
    dq.insert(dq.end(), "E");

    std::cout << "Deque after insertions: ";
    for (const auto& str : dq) std::cout << str << " ";

    return 0;
}
