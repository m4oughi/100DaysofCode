#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    Box(T v = T()) : value(v) {}

    // Overload the stream extraction operator
    friend istream& operator>>(istream& is, Box& box) {
        is >> box.value;
        return is;
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Box& box) {
        os << "Box value: " << box.value;
        return os;
    }
};

int main() {
    Box<int> intBox;
    Box<string> strBox;

    cout << "Enter an integer and a string: ";
    cin >> intBox >> strBox;
    cout << intBox << endl;
    cout << strBox << endl;

    return 0;
}
