#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    Array() {
        for (int i = 0; i < 5; i++)
            arr[i] = i + 1;
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            throw out_of_range("Index out of bounds");
        }
        return arr[index];
    }
};

int main() {
    Array a;
    a[2] = 100;
    cout << a[2] << endl;  // Output: 100
    return 0;
}
