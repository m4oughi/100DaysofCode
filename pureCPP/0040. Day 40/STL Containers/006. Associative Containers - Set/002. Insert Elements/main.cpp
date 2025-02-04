#include <iostream>
#include <set>

int main() {
    std::set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate, will not be added

    for (int i : s) {
        std::cout << i << " ";
    }

    return 0;
}
