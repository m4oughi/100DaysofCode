#include <iostream>
#include <set>

struct CompareDescending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::set<int, CompareDescending> descSet = {1, 2, 3, 4, 5};

    for (int num : descSet) {
        std::cout << num << " ";
    }
    return 0;
}
