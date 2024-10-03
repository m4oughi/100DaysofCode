#include <iostream>
using namespace std;

class Vector {
    int arr[5];
public:
    Vector() {
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 1;  // Initializing array with values 1 to 5
    }

    // Overloading the [] operator
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Vector v;
    v[2] = 10;  // Using overloaded [] to modify the third element
    cout << "Element at index 2: " << v[2] << endl;  // Output: Element at index 2: 10
    return 0;
}
