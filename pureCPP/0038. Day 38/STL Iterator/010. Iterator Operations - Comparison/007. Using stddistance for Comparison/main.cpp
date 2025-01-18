#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it1 = numbers.begin();
    auto it2 = numbers.end();

    int dist = std::distance(it1, it2);

    std::cout << "Distance between begin and end: " << dist << std::endl;

    return 0;
}
