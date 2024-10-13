#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        int* ptr = new int(100); // allocating memory inside loop
        cout << "Iteration " << i << ": " << *ptr << endl;

        // No delete statement, memory for each pointer is lost after each iteration
    }

    return 0; // Memory leak occurs because no memory is deallocated
}
