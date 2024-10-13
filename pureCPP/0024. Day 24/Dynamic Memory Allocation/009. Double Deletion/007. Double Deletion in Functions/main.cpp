#include <iostream>
using namespace std;

void deleteMemory(int* ptr) {
    delete ptr; // delete the passed pointer
}

int main() {
    int* ptr = new int(50); // dynamically allocate memory

    deleteMemory(ptr); // first deletion
    deleteMemory(ptr); // second deletion (Error: undefined behavior)

    return 0;
}
