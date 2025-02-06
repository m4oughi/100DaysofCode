#include <iostream>
#include <list>

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;  // Compare based on second value of pairs
}

int main() {
    std::list<std::pair<int, int>> list1 = {{1, 10}, {2, 20}};
    std::list<std::pair<int, int>> list2 = {{3, 15}, {4, 25}};

    list1.merge(list2, comparePairs);

    std::cout << "Merged list sorted by second value of pairs: ";
    for (const auto& p : list1) 
        std::cout << "(" << p.first << ", " << p.second << ") ";

    return 0;
}
