#include <iostream>
#include <functional>

int main() {
    std::function<int(const int[], int, int, int)> binarySearch = [&](const int arr[], int left, int right, int target) -> int {
        if (left > right) return -1;
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target);
        return binarySearch(arr, mid + 1, right, target);
    };

    int arr[] = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int index = binarySearch(arr, 0, 5, target);
    std::cout << "Index of " << target << ": " << index << std::endl; // Outputs: Index of 7: 3

    return 0;
}
