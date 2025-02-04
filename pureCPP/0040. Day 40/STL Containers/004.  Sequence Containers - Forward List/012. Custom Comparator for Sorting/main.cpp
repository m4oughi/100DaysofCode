#include <iostream>
#include <forward_list>
#include <algorithm>

bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second; // Sort by the second element
}

int main() {
    std::forward_list<std::pair<int, int>> flist = {{1, 50}, {2, 30}, {3, 40}};

    flist.sort(customComparator);

    for (const auto& p : flist) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
