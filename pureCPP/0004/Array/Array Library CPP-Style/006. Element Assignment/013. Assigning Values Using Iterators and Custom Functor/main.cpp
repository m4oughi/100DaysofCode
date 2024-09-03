#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>  // For std::for_each

struct Incrementer {
    int value;
    Incrementer(int start) : value(start) {}
    int operator()() { return value++; }
};

int main() {
    std::array<int, 5> arr;

    Incrementer inc(1);
    std::generate(arr.begin(), arr.end(), inc);  // Assign increasing values starting from 1

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 1 2 3 4 5
    }

    return 0;
}