#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        int* ptr = new int(100); // dynamically allocate memory
        cout << "Iteration " << i << ": " << *ptr << endl;

        delete ptr; // deallocate memory after each iteration
    }

    return 0;
}
