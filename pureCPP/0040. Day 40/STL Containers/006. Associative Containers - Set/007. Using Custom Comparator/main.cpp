#include <iostream>
#include <set>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b; // Sort in descending order
    }
};

int main() {
    std::set<int, Descending> s = {10, 20, 30, 40};

    for (int i : s) {
        std::cout << i << " ";
    }

    return 0;
}
