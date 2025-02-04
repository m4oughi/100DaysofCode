#include <iostream>
#include <set>

int main() {
    std::set<int> s = {1, 2, 3, 4, 5};

    for (int i : s) {
        std::cout << i << " ";
    }

    return 0;
}
