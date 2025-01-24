#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> destination;

    std::set<int> unique_elements;
    std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [&unique_elements](int x) {
        return unique_elements.insert(x).second; // Only insert unique elements
    });

    std::cout << "Unique elements: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
