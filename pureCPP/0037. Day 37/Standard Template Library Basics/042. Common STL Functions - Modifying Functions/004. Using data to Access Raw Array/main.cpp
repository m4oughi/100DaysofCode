#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int* arr = vec.data();

    std::cout << "Raw array elements:\n";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
