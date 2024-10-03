#include <iostream>
using namespace std;

class Matrix {
    int data[3][3];
public:
    Matrix() {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                data[i][j] = i * 3 + j + 1;
    }

    class Proxy {
        int* row;
    public:
        Proxy(int* r) : row(r) {}
        int& operator[](int index) {
            return row[index];  // Return the element at index in the row
        }
    };

    Proxy operator[](int index) {
        return Proxy(data[index]);  // Return a proxy object representing the row
    }

    void display() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix mat;
    mat[1][1] = 100;  // Modify element using subscript operator with proxy
    mat.display();
    // Output:
    // 1 2 3
    // 4 100 6
    // 7 8 9
    return 0;
}
