#include <iostream>
#include <type_traits>

enum class Animal : short { Dog = 1, Cat = 2, Bird = 3 };

template<typename E>
typename std::underlying_type<E>::type toInt(E e) {
    return static_cast<typename std::underlying_type<E>::type>(e);
}

int main() {
    Animal a = Animal::Cat;
    std::cout << "Animal (Cat) as int: " << toInt(a) << std::endl;
}
