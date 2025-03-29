#include <iostream>
#include <span>

void print(std::span<int> data) {
    for (int value : data) {
        std::cout << value << " ";
    }
    std::cout << "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    print(arr);  // Passing array to function as std::span

    return 0;
}
