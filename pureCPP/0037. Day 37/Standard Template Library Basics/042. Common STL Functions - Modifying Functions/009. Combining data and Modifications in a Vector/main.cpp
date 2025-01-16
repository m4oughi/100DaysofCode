#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30};

    int* ptr = vec.data();
    for (size_t i = 0; i < vec.size(); ++i) {
        ptr[i] += 5; // Modify through raw pointer
    }

    std::cout << "Modified vector elements:\n";
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    return 0;
}
