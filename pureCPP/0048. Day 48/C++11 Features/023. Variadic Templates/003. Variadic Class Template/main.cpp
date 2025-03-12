#include <iostream>

template <typename... Args>
class Tuple {};

template <typename First, typename... Rest>
class Tuple<First, Rest...> {
    First first;
    Tuple<Rest...> rest;
public:
    Tuple(First f, Rest... r) : first(f), rest(r...) {}

    void print() const {
        std::cout << first << " ";
        rest.print();
    }
};

template <>
class Tuple<> {  // Base case for recursion
public:
    void print() const {}
};

int main() {
    Tuple<int, double, char> t(42, 3.14, 'A');
    t.print();
    return 0;
}
