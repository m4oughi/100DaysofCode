#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(5); // Managing an array

    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}
