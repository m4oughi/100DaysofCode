#include <iostream>
using namespace std;

template<typename... Args>
class Tuple {};

template<typename T, typename... Args>
class Tuple<T, Args...> : public Tuple<Args...> {
public:
    T value;
    Tuple(T val, Args... args) : Tuple<Args...>(args...), value(val) {}
};

int main() {
    Tuple<int, double, char> myTuple(10, 3.14, 'A');
    cout << "Tuple created with variadic template" << endl;
    return 0;
}
