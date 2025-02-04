#include <iostream>
#include <deque>
#include <utility>

int main() {
    std::deque<std::pair<int, std::string>> dq;

    dq.emplace_back(1, "Alice");
    dq.emplace_front(2, "Bob");

    for (const auto& p : dq) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
