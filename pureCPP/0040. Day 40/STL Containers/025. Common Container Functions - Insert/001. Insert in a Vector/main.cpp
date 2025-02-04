#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    // Insert 10 at the second position
    vec.insert(vec.begin() + 1, 10);

    // Output the vector after insertion
    std::cout << "Vector after insert: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
