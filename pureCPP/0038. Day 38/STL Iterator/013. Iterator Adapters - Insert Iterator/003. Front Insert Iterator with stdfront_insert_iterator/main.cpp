#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<int> source = {4, 5, 6};
    std::list<int> target = {1, 2, 3};

    auto it = std::front_insert_iterator<std::list<int>>(target);

    std::copy(source.begin(), source.end(), it);

    std::cout << "Target after front insertion: ";
    for (int num : target) {
        std::cout << num << " ";
    }

    return 0;
}
