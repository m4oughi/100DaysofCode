#include <iostream>
using namespace std;

template <typename T>
void evaluate(T a) {
    cout << "Evaluating generic type: " << a << endl;
}

void evaluate(double a) {
    cout << "Evaluating double: " << a << endl;
}

int main() {
    evaluate(4.5);    // Calls evaluate(double) since 4.5 is a double
    evaluate(10);     // Calls template version since it's a generic int
    return 0;
}
