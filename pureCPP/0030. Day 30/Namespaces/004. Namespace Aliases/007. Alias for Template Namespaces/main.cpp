#include <iostream>
#include <vector>

namespace DataStructures {
    template <typename T>
    using Vector = std::vector<T>;
}

// Alias for DataStructures namespace
namespace DS = DataStructures;

int main() {
    DS::Vector<int> numbers = {1, 2, 3, 4, 5};  // Using alias with template

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
