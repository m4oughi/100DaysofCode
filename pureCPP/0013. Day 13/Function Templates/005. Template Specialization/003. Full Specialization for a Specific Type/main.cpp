#include <iostream>
using namespace std;

template <typename T>
class Storage {
    T value;
public:
    Storage(T v) : value(v) {}
    void print() const {
        cout << "Value: " << value << endl;
    }
};

// Full specialization for char type
template <>
class Storage<char> {
    char value;
public:
    Storage(char v) : value(v) {}
    void print() const {
        cout << "Character: " << value << endl;
    }
};

int main() {
    Storage<int> intStorage(100);
    intStorage.print();  // Generic version

    Storage<char> charStorage('A');
    charStorage.print();  // Specialized version for char

    return 0;
}
