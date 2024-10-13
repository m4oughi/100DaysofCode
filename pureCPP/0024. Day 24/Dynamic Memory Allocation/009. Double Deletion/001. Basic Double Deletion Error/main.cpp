#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10); // dynamically allocate memory

    delete ptr; // first deletion
    delete ptr; // second deletion (Error: undefined behavior)

    return 0;
}
