#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3};

    bool isPrefix = std::equal(vec2.begin(), vec2.end(), vec1.begin());

    std::cout << (isPrefix ? "vec2 is a prefix of vec1." : "vec2 is not a prefix of vec1.") << std::endl;

    return 0;
}
