#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr(new int(50)); // use smart pointer (no need for delete)
    cout << "Smart Pointer Value: " << *ptr << endl;

    // Memory will be automatically deallocated when ptr goes out of scope
    return 0;
}
