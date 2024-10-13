#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int[]> arr(new int[5]); // dynamically allocate an array with smart pointer

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // No need to delete, memory is automatically deallocated
    return 0;
}
