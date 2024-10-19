#include <iostream>
using namespace std;

int main() {
    // Attempting to initialize a list with narrowing conversion
    int values[] = {1, 2, 3000000000};  // Narrowing conversion from unsigned long to int (warning or error)

    for (int val : values) {
        cout << val << " ";
    }

    return 0;
}
