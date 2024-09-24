#include <iostream>

int main() {
    int arr[] = {1, 2, 3};
    int &aliasA = arr[1];  // aliasA refers to arr[1]
    int &aliasB = arr[1];  // aliasB also refers to arr[1]

    aliasA = 10;  // Modify arr[1] through aliasA
    std::cout << aliasB << std::endl;  // Output: 10 (aliasB reflects the change)

    return 0;
}