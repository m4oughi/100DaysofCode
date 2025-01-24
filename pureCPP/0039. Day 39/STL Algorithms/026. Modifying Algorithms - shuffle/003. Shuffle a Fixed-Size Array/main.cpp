#include <iostream>
#include <algorithm>
#include <random>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(arr, arr + size, generator);

    std::cout << "Shuffled array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
