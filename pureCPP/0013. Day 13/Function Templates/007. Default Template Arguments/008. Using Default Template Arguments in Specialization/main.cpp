#include <iostream>
using namespace std;

template <typename T = int>
class Number {
public:
    void display(T value) {
        cout << "Number: " << value << endl;
    }
};

// Full specialization for char
template <>
class Number<char> {
public:
    void display(char value) {
        cout << "Character: " << value << endl;
    }
};

int main() {
    Number<> num;    // Uses default int
    num.display(100);

    Number<char> charNum;  // Uses specialized char version
    charNum.display('A');
    
    return 0;
}
