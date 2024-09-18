#include <iostream>
using namespace std;

void show(char c) {
    cout << "Character: " << c << endl;
}

void show(float f) {
    cout << "Float: " << f << endl;
}

int main() {
    show('A');       // Calls show(char)
    show(3.14f);     // Calls show(float)
    return 0;
}
