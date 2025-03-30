#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int num : arr) { // ✅ Works with raw arrays (exception to the rule)
        std::cout << num << " ";
    }

    return 0;
}
