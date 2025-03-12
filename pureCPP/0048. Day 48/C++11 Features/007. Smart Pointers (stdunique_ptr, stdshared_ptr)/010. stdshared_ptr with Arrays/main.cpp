#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int[]> arr(new int[5], std::default_delete<int[]>());

    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 5;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
