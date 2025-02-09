#include <iostream>
#include <set>

int main() {
    std::set<int> s = {1, 2, 3};
    std::multiset<int> ms = {1, 2, 2, 3};

    std::cout << "Set elements: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        std::cout << *it << " ";

    std::cout << "\nMultiset elements: ";
    for (auto it = ms.begin(); it != ms.end(); ++it)
        std::cout << *it << " ";

    return 0;
}
