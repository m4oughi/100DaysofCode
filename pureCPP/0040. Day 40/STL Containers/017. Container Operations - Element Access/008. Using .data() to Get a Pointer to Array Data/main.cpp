#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    int* ptr = vec.data(); // Getting raw pointer

    std::cout << "First element using pointer: " << *ptr << "\n"; // 10

    return 0;
}
