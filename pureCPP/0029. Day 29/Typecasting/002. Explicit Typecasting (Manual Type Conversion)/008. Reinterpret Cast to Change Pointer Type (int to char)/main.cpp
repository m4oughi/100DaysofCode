#include <iostream>
using namespace std;

int main() {
    int num = 65;
    char* ptr = reinterpret_cast<char*>(&num);  // Reinterpreting int* as char*
    cout << "Interpreted value: " << *ptr << endl;  // Prints the ASCII character
    return 0;
}
