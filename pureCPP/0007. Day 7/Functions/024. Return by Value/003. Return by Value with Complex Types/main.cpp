#include <iostream>
#include <vector>

std::vector<int> createSequence(int size) {
    std::vector<int> seq(size);
    for (int i = 0; i < size; ++i) {
        seq[i] = i + 1;  // Fill vector with values
    }
    return seq;  // Return by value
}

int main() {
    std::vector<int> sequence = createSequence(5);
    for (int num : sequence) {
        std::cout << num << " ";  // Output: 1 2 3 4 5
    }
    std::cout << std::endl;
    return 0;
}
