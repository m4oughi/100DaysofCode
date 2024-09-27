#include <iostream>
using namespace std;

template <typename T>
class Container {
    T value;
public:
    Container(T v) : value(v) {}
    void display() {
        cout << "Value: " << value << endl;
    }
};

// Template alias
template <typename T>
using MyContainer = Container<T>;

int main() {
    MyContainer<int> intContainer(100);        // Uses template alias
    MyContainer<double> doubleContainer(3.14); // Uses template alias
    intContainer.display();
    doubleContainer.display();
    return 0;
}
