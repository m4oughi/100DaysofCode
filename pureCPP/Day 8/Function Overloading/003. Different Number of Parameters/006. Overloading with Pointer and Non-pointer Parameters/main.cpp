#include <iostream>
using namespace std;

void process(int a) {
    cout << "Processing integer: " << a << endl;
}

void process(int* p, int size) {
    cout << "Processing array of size " << size << ": ";
    for (int i = 0; i < size; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int a = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    process(a);              // Calls process(int)
    process(arr, 5);         // Calls process(int*, int)
    
    return 0;
}
