#include <iostream>
#include <algorithm>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    bool isEqual = std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2));

    std::cout << (isEqual ? "Arrays are equal." : "Arrays are not equal.") << std::endl;

    return 0;
}
