#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(20); // dynamically allocate memory

    delete ptr; // first deletion
    ptr = nullptr; // set pointer to null to avoid double deletion

    if (ptr != nullptr) {
        delete ptr; // second deletion is safe, because ptr is null
    }

    return 0;
}
