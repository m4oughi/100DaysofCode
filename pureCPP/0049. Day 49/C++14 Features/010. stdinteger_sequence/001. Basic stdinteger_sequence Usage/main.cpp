#include <iostream>
#include <utility>

int main() {
    std::integer_sequence<int, 1, 2, 3, 4, 5> seq;
    std::cout << "Size of sequence: " << seq.size() << std::endl; // Output: 5
    return 0;
}
