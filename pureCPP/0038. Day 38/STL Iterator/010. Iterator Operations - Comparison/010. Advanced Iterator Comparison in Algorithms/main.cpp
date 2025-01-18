#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = {1, 2, 3, 4};

    if (std::equal(v1.begin(), v1.end(), v2.begin())) {
        std::cout << "The two vectors are equal." << std::endl;
    } else {
        std::cout << "The two vectors are not equal." << std::endl;
    }

    return 0;
}
