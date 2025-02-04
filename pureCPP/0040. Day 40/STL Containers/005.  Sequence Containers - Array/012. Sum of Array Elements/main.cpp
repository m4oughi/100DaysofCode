#include <iostream>
#include <array>
#include <numeric>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    int sum = std::accumulate(arr.begin(), arr.end(), 0);

    std::cout << "Sum of elements: " << sum << "\n";

    return 0;
}
