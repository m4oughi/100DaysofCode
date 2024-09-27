#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

// Partial specialization when both types are the same
template <typename T>
class Pair<T, T> {
public:
    T first, second;
    Pair(T a, T b) : first(a), second(b) {}
    void display() {
        cout << "Both values are the same: " << first << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    p1.display();  // Generic version
    
    Pair<int, int> p2(100, 100);
    p2.display();  // Specialized version for same types
    return 0;
}
