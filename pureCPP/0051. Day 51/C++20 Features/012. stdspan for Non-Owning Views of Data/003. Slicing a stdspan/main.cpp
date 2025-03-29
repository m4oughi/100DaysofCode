#include <iostream>
#include <span>

void print(std::span<int> data) {
    for (int value : data) std::cout << value << " ";
    std::cout << "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    std::span<int> full_span(arr);
    std::span<int> sub_span = full_span.subspan(2, 4);  // Slice from index 2 with 4 elements

    print(sub_span);  // Output: 3 4 5 6

    return 0;
}
