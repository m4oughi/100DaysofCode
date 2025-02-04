#include <iostream>
#include <set>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::multiset<int, Descending> ms = {10, 20, 20, 30};

    for (int i : ms) {
        std::cout << i << " ";
    }

    return 0;
}
