#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr(new int(50)); // allocate memory using smart pointer

    // No need to manually delete, memory is handled by `unique_ptr`
    delete ptr.get(); // Error: unique_ptr automatically manages deletion

    return 0;
}
