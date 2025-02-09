#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30};
    std::multiset<int> ms = {10, 20, 20, 30};

    auto it_s = s.find(20);
    if (it_s != s.end()) std::cout << "Found 20 in set\n";

    auto it_ms = ms.find(20);
    if (it_ms != ms.end()) std::cout << "Found 20 in multiset\n";

    return 0;
}
