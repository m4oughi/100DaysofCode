#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "Vector elements: ";
    for (int n : vec) std::cout << n << " "; // 10 20 30

    return 0;
}
