#include <iostream>
#include <list>
#include <algorithm>

bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second; // Sort by the second element
}

int main() {
    std::list<std::pair<int, int>> lst = {{1, 50}, {2, 30}, {3, 40}};

    lst.sort(customComparator);

    for (const auto& p : lst) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
