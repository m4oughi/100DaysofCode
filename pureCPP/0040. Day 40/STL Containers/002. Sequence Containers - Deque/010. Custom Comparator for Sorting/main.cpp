#include <iostream>
#include <deque>
#include <algorithm>

bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second; // Sort by the second element
}

int main() {
    std::deque<std::pair<int, int>> dq = {{1, 50}, {2, 30}, {3, 40}};

    std::sort(dq.begin(), dq.end(), customComparator);

    for (const auto& p : dq) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
