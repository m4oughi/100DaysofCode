#include <iostream>
#include <new> // for std::bad_alloc
using namespace std;

int main() {
    try {
        int size = 1000000000; // very large size
        int* arr = new int[size]; // try allocating large memory
        cout << "Memory allocation successful!" << endl;

        delete[] arr; // deallocate memory
    } catch (bad_alloc& e) {
        cout << "Memory allocation failed: " << e.what() << endl;
    }
    return 0;
}
