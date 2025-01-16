#include <iostream>
#include <set>

struct Descending {
    bool operator() (const int &a, const int &b) const {
        return a > b;
    }
};

int main() {
    std::multiset<int, Descending> numbers = {1, 2, 2, 3};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
