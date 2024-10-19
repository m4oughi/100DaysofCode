#include <iostream>
using namespace std;

int main() {
    volatile int var = 100;
    int* ptr = const_cast<int*>(&var);  // Remove volatile qualifier
    *ptr = 200;

    cout << "Modified value: " << var << endl;
    return 0;
}
