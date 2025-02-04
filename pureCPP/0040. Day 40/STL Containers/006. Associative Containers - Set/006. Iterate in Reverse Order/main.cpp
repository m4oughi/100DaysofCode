#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40};

    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
