#include <iostream>
using namespace std;

template<size_t idx, typename T, typename... Args>
struct TupleElement;

template<typename T, typename... Args>
struct TupleElement<0, T, Args...> {
    using Type = T;
    static T& get(T& first, Args&...) {
        return first;
    }
};

template<size_t idx, typename T, typename... Args>
struct TupleElement<idx, T, Args...> {
    using Type = typename TupleElement<idx - 1, Args...>::Type;
    static Type& get(T&, Args&... args) {
        return TupleElement<idx - 1, Args...>::get(args...);
    }
};

template<typename... Args>
class MyTuple {};

template<typename T, typename... Args>
class MyTuple<T, Args...> : public MyTuple<Args...> {
public:
    T value;
    MyTuple(T val, Args... args) : MyTuple<Args...>(args...), value(val) {}
};

int main() {
    MyTuple<int, double, char> tuple(10, 3.14, 'A');
    cout << TupleElement<0, int, double, char>::get(tuple.value) << endl;  // Access the first element (10)
    cout << TupleElement<1, int, double, char>::get(tuple.value, 3.14) << endl;  // Access the second element (3.14)
    cout << TupleElement<2, int, double, char>::get(tuple.value, 3.14, 'A') << endl;  // Access the third element ('A')
    return 0;
}
