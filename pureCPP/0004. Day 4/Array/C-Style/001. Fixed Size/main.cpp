#include <iostream>

void printArray(int arr[5]) {
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << " ";
    }
};

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers);
}