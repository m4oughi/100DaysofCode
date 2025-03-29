#include <iostream>
#include <vector>
#include <span>

void print(std::span<int> data) {
    for (int value : data) std::cout << value << " ";
    std::cout << "\n";
}

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    print(vec);  // Passing vector to function as std::span

    return 0;
}
