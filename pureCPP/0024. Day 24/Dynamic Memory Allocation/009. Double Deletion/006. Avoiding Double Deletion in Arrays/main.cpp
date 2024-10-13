#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3]{1, 2, 3}; // dynamically allocate an array

    delete[] arr; // first deletion
    arr = nullptr; // set array pointer to null to avoid double deletion

    if (arr != nullptr) {
        delete[] arr; // safe, since arr is now null
    }

    return 0;
}
