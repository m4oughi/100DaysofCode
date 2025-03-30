#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int num : arr) { // C++11 introduced this feature
        std::cout << num << " ";
    }

    return 0;
}
