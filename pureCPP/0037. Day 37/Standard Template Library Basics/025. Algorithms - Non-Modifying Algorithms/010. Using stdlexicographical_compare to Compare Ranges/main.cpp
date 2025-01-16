#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 4};

    bool result = std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
    std::cout << "vec1 is " << (result ? "lexicographically smaller than" : "not smaller than") << " vec2.\n";

    return 0;
}
