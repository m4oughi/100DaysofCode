#include <iostream>
using namespace std;

void convert(int a) {
    cout << "Converting integer: " << a << endl;
}

void convert(char a) {
    cout << "Converting character: " << a << endl;
}

int main() {
    convert('A');  // Calls convert(char)
    convert(65);   // Calls convert(int)
    return 0;
}
