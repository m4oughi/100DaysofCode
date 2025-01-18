#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (auto row = matrix.begin(); row != matrix.end(); ++row) {
        for (auto col = row->begin(); col != row->end(); ++col) {
            std::cout << *col << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
