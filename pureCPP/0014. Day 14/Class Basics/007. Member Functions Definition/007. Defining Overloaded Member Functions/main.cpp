#include <iostream>
using namespace std;

class PrintData {
public:
    // Overloaded member functions
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double f) {
        cout << "Printing float: " << f << endl;
    }

    void print(string str) {
        cout << "Printing string: " << str << endl;
    }
};

int main() {
    PrintData pd;
    pd.print(5);
    pd.print(3.14);
    pd.print("Hello, World!");
    return 0;
}
