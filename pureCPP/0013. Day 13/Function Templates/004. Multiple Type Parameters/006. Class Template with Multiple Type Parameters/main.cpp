#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    
    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> intDoublePair(10, 20.5);
    intDoublePair.display();
    
    Pair<string, char> stringCharPair("Hello", 'A');
    stringCharPair.display();
    
    return 0;
}
