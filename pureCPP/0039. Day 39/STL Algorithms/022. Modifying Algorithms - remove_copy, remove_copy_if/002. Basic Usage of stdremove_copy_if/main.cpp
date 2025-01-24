#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> result;

    std::remove_copy_if(vec.begin(), vec.end(), std::back_inserter(result), [](int num) {
        return num % 2 == 0; // Exclude even numbers
    });

    std::cout << "Result after remove_copy_if (excluding even numbers): ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
