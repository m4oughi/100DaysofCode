#include <iostream>
#include <utility>

int main() {
    std::integer_sequence<int, 1, 2, 3, 4, 5> seq;
    std::cout << "Sequence size: " << seq.size() << std::endl; // Output: 5
    return 0;
}
