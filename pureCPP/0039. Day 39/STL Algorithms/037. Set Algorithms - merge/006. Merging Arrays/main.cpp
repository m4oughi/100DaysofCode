#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int arr1[] = {5, 10, 15};
    int arr2[] = {8, 12, 20};
    std::vector<int> result(6);

    std::merge(arr1, arr1 + 3, arr2, arr2 + 3, result.begin());

    std::cout << "Merged array into vector: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
