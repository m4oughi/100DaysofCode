#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = RED;
    int colorValue = static_cast<int>(c);  // Static cast from enum to int
    cout << "Color value: " << colorValue << endl;
    return 0;
}
