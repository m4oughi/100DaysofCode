#include <iostream>
using namespace std;

void display(int a) {
    cout << "Non-template function: " << a << endl;
}

template<typename T>
void display(T a) {
    cout << "Template function: " << a << endl;
}

int main() {
    display(10);     // Calls non-template version
    display(10.5);   // Calls template version

    return 0;
}
