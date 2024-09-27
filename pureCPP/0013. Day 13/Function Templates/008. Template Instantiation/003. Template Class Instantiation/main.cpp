#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox(100);         // Instantiating with int
    Box<double> doubleBox(99.99); // Instantiating with double
    
    cout << "Integer Box: " << intBox.getValue() << endl;
    cout << "Double Box: " << doubleBox.getValue() << endl;
    return 0;
}
