#include <iostream>
using namespace std;

void createMemoryLeak() {
    int* ptr = new int(100); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    // Forgot to delete memory here, causing a memory leak
}

int main() {
    createMemoryLeak(); // memory not freed, leads to leak

    return 0;
}
