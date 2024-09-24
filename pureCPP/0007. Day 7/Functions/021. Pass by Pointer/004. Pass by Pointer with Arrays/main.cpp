#include <iostream>

void reverseArray(int* arr, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    reverseArray(numbers, 5);
    
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
