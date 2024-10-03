#include <iostream>
#include <stdexcept>
using namespace std;

class SafeInput {
    int data;
public:
    SafeInput() : data(0) {}

    friend istream& operator>>(istream& is, SafeInput& input) {
        is >> input.data;
        if (is.fail()) {
            throw runtime_error("Invalid input!");
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, const SafeInput& input) {
        os << "Data: " << input.data;
        return os;
    }
};

int main() {
    SafeInput si;
    try {
        cout << "Enter an integer: ";
        cin >> si;
        cout << "You entered: " << si << endl;
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
    return 0;
}
