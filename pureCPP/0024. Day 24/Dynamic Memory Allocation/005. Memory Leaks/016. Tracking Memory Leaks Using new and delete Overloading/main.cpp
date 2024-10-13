#include <iostream>
#include <cstdlib>
using namespace std;

void* operator new(size_t size) {
    cout << "Allocating " << size << " bytes" << endl;
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    cout << "Deallocating memory" << endl;
    free(ptr);
}

int main() {
    int* ptr = new int(42); // dynamically allocate memory
    delete ptr; // deallocate memory

    return 0;
}
