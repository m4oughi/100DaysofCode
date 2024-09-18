#include <iostream>
using namespace std;

void print(int* p) {
    cout << "Pointer to Integer: " << *p << endl;
}

void print(float* p) {
    cout << "Pointer to Float: " << *p << endl;
}

int main() {
    int a = 100;
    float b = 3.14f;
    
    print(&a);     // Calls print(int*)
    print(&b);     // Calls print(float*)
    
    return 0;
}
