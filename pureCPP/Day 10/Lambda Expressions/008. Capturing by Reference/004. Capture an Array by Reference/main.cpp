#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    auto modifyArray = [&arr]() {
        arr[0] = 10;
    };

    modifyArray();
    std::cout << "Modified array: " << arr[0] << std::endl; // Outputs: Modified array: 10
    return 0;
}
