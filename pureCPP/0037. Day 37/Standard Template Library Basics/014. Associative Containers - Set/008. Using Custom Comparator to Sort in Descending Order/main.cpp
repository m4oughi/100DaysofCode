#include <iostream>
#include <set>

struct Descending {
    bool operator() (const int &a, const int &b) const {
        return a > b;
    }
};

int main() {
    std::set<int, Descending> numbers = {3, 1, 4, 2};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
