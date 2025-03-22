#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count_even = std::count_if(std::execution::par, data.begin(), data.end(),
                                   [](int n) { return n % 2 == 0; });

    std::cout << "Number of even numbers: " << count_even << '\n';

    return 0;
}
