#include <iostream>
using namespace std;

class Matrix {
public:
    int mat[2][2];

    void setValues() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << "Enter value for mat[" << i << "][" << j << "]: ";
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        cout << "Matrix values:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix matrices[2];  // Array of Matrix objects

    for (int i = 0; i < 2; i++) {
        cout << "Enter values for Matrix " << i + 1 << ":\n";
        matrices[i].setValues();
    }

    for (int i = 0; i < 2; i++) {
        cout << "Displaying Matrix " << i + 1 << ":\n";
        matrices[i].display();
    }

    return 0;
}
