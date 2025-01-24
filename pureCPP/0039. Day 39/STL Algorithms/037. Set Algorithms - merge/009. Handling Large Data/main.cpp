#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> large1(1000, 1); // 1000 ones
    std::vector<int> large2(1000, 2); // 1000 twos
    std::vector<int> result(2000);

    std::merge(large1.begin(), large1.end(), large2.begin(), large2.end(), result.begin());

    std::cout << "First 10 elements of merged result: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}
