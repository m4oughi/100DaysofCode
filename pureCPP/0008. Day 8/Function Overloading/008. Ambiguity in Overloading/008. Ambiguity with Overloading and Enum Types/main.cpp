#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

void process(int a) {
    cout << "Processing integer: " << a << endl;
}

void process(Color c) {
    cout << "Processing color" << endl;
}

int main() {
    process(RED);  // Ambiguous: RED is an enum but could be promoted to int
    return 0;
}
