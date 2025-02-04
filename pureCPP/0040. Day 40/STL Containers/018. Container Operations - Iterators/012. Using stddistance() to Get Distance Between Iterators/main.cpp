#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> vec = {5, 10, 15, 20, 25, 30};

    auto start = vec.begin();
    auto end = vec.end();
    int dist = std::distance(start, end);

    std::cout << "Number of elements: " << dist << "\n"; // 6

    return 0;
}
