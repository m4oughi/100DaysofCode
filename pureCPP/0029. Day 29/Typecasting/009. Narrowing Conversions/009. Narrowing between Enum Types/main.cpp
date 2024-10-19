#include <iostream>
using namespace std;

enum Color { RED = 1, BLUE = 2 };
enum Animal { DOG = 1, CAT = 2 };

int main() {
    Color c = RED;
    Animal a = static_cast<Animal>(c);  // Narrowing conversion between enums

    cout << "Color as Animal: " << a << endl;  // 1 (but logically incorrect)
    return 0;
}
