#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Template: " << value << endl;
}

void display(int value) {
    cout << "Integer: " << value << endl;
}

int main() {
    display(5);        // Calls display(int) (non-template version)
    display(5.67);     // Calls display<double> (template version)
    return 0;
}
