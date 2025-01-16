#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    bool areEqual = std::equal(vec1.begin(), vec1.end(), vec2.begin());
    std::cout << "The two vectors are " << (areEqual ? "equal" : "not equal") << "\n";

    return 0;
}
