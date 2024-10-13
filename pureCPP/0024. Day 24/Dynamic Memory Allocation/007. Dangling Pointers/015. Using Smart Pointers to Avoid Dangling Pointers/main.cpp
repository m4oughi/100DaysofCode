#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1(new int(10)); // allocate memory with smart pointer
    cout << "Smart pointer value: " << *ptr1 << endl;

    // No need to delete, memory is managed automatically
    return 0;
}
