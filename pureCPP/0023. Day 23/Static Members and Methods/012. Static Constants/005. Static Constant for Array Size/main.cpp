#include <iostream>
using namespace std;

class ArrayManager {
public:
    static const int size = 5;  // Static constant for array size
};

int main() {
    // Using static constant to define array size
    int numbers[ArrayManager::size] = {1, 2, 3, 4, 5};

    // Printing array elements
    for (int i = 0; i < ArrayManager::size; i++) {
        cout << numbers[i] << " ";  // Output: 1 2 3 4 5
    }
    cout << endl;

    return 0;
}
