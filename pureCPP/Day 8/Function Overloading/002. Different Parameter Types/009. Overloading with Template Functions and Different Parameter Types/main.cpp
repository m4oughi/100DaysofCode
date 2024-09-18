#include <iostream>
using namespace std;

template <typename T>
void print(T data) {
    cout << "Template: " << data << endl;
}

void print(int data) {
    cout << "Integer: " << data << endl;
}

void print(double data) {
    cout << "Double: " << data << endl;
}

int main() {
    print(10);         // Calls print(int)
    print(5.67);       // Calls print(double)
    print("Hello");    // Calls print(T) (template version)
    
    return 0;
}
