#include <iostream>
using namespace std;

class Vector {
    int arr[5];
public:
    Vector() {
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 1;
    }

    // Non-const subscript operator
    int& operator[](int index) {
        return arr[index];
    }

    // Const subscript operator for read-only access
    int operator[](int index) const {
        return arr[index];
    }
};

int main() {
    const Vector v1;
    Vector v2;

    cout << v1[2] << endl;  // Read-only access (const version) Output: 3
    v2[2] = 10;             // Modify element (non-const version)
    cout << v2[2] << endl;  // Output: 10

    return 0;
}
