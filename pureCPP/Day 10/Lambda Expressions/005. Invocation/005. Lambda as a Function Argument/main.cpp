#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    // Using a lambda as an argument to a standard algorithm
    std::for_each(vec.begin(), vec.end(), [](int n) {
        std::cout << n * n << " ";
    }); // Outputs: 1 4 9 16 25 36
    return 0;
}
