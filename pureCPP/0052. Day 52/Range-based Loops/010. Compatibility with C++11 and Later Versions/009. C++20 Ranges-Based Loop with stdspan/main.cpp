#include <iostream>
#include <span>

void print(std::span<int> numbers) { // C++20 std::span
    for (int num : numbers) {
        std::cout << num << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40};
    print(arr); // `std::span` allows non-owning iteration

    return 0;
}
