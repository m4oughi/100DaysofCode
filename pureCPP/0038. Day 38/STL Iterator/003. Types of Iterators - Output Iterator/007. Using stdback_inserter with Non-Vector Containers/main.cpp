#include <iostream>
#include <list>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::list<int> destination;

    // Appending elements from vector to list
    std::copy(source.begin(), source.end(), std::back_inserter(destination));

    for (const auto& num : destination) {
        std::cout << num << " ";
    }

    return 0;
}
