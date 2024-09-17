#include <iostream>

template <typename T, int size>
T getArraySum(T (&arr)[size]) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Sum of array: " << getArraySum(arr) << std::endl;
    
    return 0;
}
