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
    std::vector<int> vec = {2, 3, 5, 7, 4, 6, 8, 9};
    std::stable_partition(vec.begin(), vec.end(), is_prime);

    auto it = std::partition_point(vec.begin(), vec.end(), is_prime);

    if (it != vec.end()) {
        std::cout << "Partition point (first non-prime number): " << *it << std::endl;
    } else {
        std::cout << "All numbers are prime." << std::endl;
    }

    return 0;
}
