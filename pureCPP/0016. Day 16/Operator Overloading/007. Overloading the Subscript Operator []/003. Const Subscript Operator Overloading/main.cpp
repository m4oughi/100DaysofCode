#include <iostream>
using namespace std;

class Array {
    int data[5];
public:
    Array() {
        for (int i = 0; i < 5; ++i)
            data[i] = i + 1;
    }

    int& operator[](int index) {
        return data[index];  // Non-const version for modification
    }

    int operator[](int index) const {
        return data[index];  // Const version for access
    }

    void display() const {
        for (int i = 0; i < 5; ++i)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    const Array arr;
    cout << arr[2] << endl;  // Output: 3 (const access, no modification)
    return 0;
}
