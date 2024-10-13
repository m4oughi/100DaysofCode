#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr(new int(55)); // use unique_ptr for dynamic allocation
    cout << "Unique_ptr Value: " << *ptr << endl;

    // No need to explicitly delete, memory will be automatically deallocated
    return 0;
}
