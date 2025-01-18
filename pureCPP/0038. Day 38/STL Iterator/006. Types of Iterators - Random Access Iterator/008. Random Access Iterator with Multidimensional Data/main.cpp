#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Elements in matrix: ";
    for (auto rowIt = matrix.begin(); rowIt != matrix.end(); ++rowIt) {
        for (auto colIt = rowIt->begin(); colIt != rowIt->end(); ++colIt) {
            std::cout << *colIt << " ";
        }
    }

    return 0;
}
