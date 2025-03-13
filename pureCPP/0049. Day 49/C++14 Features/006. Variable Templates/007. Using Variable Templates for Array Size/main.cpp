#include <iostream>

template<typename T, std::size_t N>
constexpr std::size_t array_size = N;

int main() {
    int arr[10];
    double values[20];

    std::cout << "Size of arr: " << array_size<int, 10> << std::endl;
    std::cout << "Size of values: " << array_size<double, 20> << std::endl;

    return 0;
}
