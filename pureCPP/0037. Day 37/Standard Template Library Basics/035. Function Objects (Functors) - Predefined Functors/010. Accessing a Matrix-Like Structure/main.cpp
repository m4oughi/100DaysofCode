#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    auto row = matrix.begin() + 1; // Access the second row
    auto col = row->begin() + 2;  // Access the third element in the second row

    std::cout << "Element at (2, 3): " << *col << "\n";

    return 0;
}
