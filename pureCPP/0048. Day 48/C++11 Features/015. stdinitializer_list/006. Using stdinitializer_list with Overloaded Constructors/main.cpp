#include <iostream>
#include <vector>

class Matrix {
public:
    std::vector<std::vector<int>> data;

    Matrix(int rows, int cols) {
        data.resize(rows, std::vector<int>(cols, 0)); // Initialize with zeros
    }

    Matrix(std::initializer_list<std::vector<int>> initList) : data(initList) {}

    void print() {
        for (const auto& row : data) {
            for (int num : row) {
                std::cout << num << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    Matrix m1(2, 3); // Zero matrix
    Matrix m2 = {{1, 2, 3}, {4, 5, 6}};

    std::cout << "Matrix initialized with initializer_list:\n";
    m2.print();

    return 0;
}
