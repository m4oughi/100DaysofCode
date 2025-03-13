#include <iostream>
#include <utility>

template <std::size_t... Ns>
void printReverse(std::index_sequence<Ns...>) {
    int arr[] = {Ns...};
    for (int i = sizeof...(Ns) - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    printReverse(std::make_index_sequence<5>{}); // Output: 4 3 2 1 0
    return 0;
}
