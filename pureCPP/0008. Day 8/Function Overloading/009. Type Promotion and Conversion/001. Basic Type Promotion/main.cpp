#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(char a) {
    cout << "Character: " << a << endl;
}

int main() {
    display('A');  // Will call display(char) as there's an exact match
    display(65);   // Will call display(int) because 65 is an integer
    return 0;
}
