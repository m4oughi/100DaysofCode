#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque<std::vector<int>> dq;

    dq.emplace_front(std::vector<int>{1, 2, 3});
    dq.emplace_front(std::vector<int>{4, 5, 6});

    std::cout << "Deque of vectors:\n";
    for (const auto& vec : dq) {
        for (int num : vec) std::cout << num << " ";
        std::cout << "\n";
    }

    return 0;
}
