#include <iostream>
using namespace std;

int main() {
    int largeValue = 300;  // Out of char range (-128 to 127)
    char narrowed = largeValue;  // Narrowing conversion

    cout << "Original int value: " << largeValue << endl;
    cout << "Narrowed char value: " << static_cast<int>(narrowed) << endl;  // Display the ASCII value

    return 0;
}
