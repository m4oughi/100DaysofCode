#include <iostream>
using namespace std;

void process(int a) {
    cout << "Processing integer: " << a << endl;
}

void process(char a) {
    cout << "Processing character: " << a << endl;
}

int main() {
    process('A');  // Ambiguous: 'A' can be treated as a char or promoted to an int
    return 0;
}
