#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
public:
    // Explicit constructor to prevent implicit conversion from initializer list
    explicit Matrix(int rows, int cols) : data(rows, std::vector<int>(cols, 0)) {
        std::cout << "Matrix with " << rows << " rows and " << cols << " columns created." << std::endl;
    }

    void print() const {
        for (const auto& row : data) {
            for (const auto& element : row) {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m1(3, 3);  // Allowed, explicit constructor called
    m1.print();
    
    // Matrix m2 = {3, 3};  // Error: Implicit conversion is not allowed
    return 0;
}
