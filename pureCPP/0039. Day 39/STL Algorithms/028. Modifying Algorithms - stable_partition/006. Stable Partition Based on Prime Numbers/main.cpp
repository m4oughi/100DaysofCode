#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> vec = {10, 7, 2, 15, 23, 11, 6, 14};

    std::stable_partition(vec.begin(), vec.end(), is_prime);

    std::cout << "Stably partitioned vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
