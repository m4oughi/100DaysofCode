#include <iostream>
using namespace std;

class Sensor {
    int value;
public:
    Sensor(int v) : value(v) {}

    friend bool operator&&(const Sensor& s1, const Sensor& s2) {
        return s1.value > 50 && s2.value > 50;
    }

    friend bool operator||(const Sensor& s1, const Sensor& s2) {
        return s1.value > 50 || s2.value > 50;
    }

    friend bool operator!(const Sensor& s) {
        return s.value <= 50;
    }

    void display() const {
        cout << "Sensor value: " << value << endl;
    }
};

int main() {
    Sensor s1(60), s2(40);

    cout << (s1 && s2) << endl;  // Output: 0 (false)
    cout << (s1 || s2) << endl;  // Output: 1 (true)
    cout << !s2 << endl;         // Output: 1 (true)

    return 0;
}
