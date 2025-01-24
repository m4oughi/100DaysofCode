#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, -2, 3, -4, 5, -6};

    auto new_end = std::remove_if(vec.begin(), vec.end(), [](int num) {
        return num < 0 || num % 2 == 0; // Remove negative or even numbers
    });
    vec.erase(new_end, vec.end());

    std::cout << "Vector after remove_if with multiple conditions: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
