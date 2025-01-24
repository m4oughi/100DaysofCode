#include <iostream>
#include <vector>
#include <algorithm>

struct Square {
    int operator()(int x) const {
        return x * x;
    }
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    std::transform(vec.begin(), vec.end(), result.begin(), Square());

    std::cout << "Squared vector: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
