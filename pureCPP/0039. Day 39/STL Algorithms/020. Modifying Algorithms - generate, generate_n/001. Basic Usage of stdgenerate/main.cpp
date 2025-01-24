#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(5);
    int num = 1;

    std::generate(vec.begin(), vec.end(), [&num]() { return num++; });

    std::cout << "Generated vector: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
