#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};
    std::vector<int> temp(lst.begin(), lst.end());

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(temp.begin(), temp.end(), generator);

    std::cout << "Shuffled list: ";
    for (int num : temp) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
