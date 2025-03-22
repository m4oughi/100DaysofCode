#include <iostream>
#include <vector>
#include <list>

template <typename Container>
void processContainer(const Container& c) {
    if constexpr (std::is_same_v<Container, std::vector<int>>) {
        std::cout << "Processing vector of ints, size: " << c.size() << '\n';
    } else if constexpr (std::is_same_v<Container, std::list<int>>) {
        std::cout << "Processing list of ints, size: " << c.size() << '\n';
    } else {
        std::cout << "Unknown container type\n";
    }
}

int main() {
    std::vector<int> v = {1, 2, 3};
    std::list<int> l = {4, 5, 6};

    processContainer(v); // Output: Processing vector of ints, size: 3
    processContainer(l); // Output: Processing list of ints, size: 3
    return 0;
}
