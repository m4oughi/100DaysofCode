#include <iostream>
#include <map>

enum class Fruit {
    Apple,
    Banana,
    Orange,
    Mango
};

int main() {
    std::map<Fruit, int> fruitCount;

    // Counting the occurrences of different fruits
    fruitCount[Fruit::Apple] = 10;
    fruitCount[Fruit::Banana] = 20;
    fruitCount[Fruit::Orange] = 15;
    fruitCount[Fruit::Mango] = 5;

    // Displaying fruit counts
    std::cout << "Apple count: " << fruitCount[Fruit::Apple] << "\n";
    std::cout << "Banana count: " << fruitCount[Fruit::Banana] << "\n";
    std::cout << "Orange count: " << fruitCount[Fruit::Orange] << "\n";
    std::cout << "Mango count: " << fruitCount[Fruit::Mango] << "\n";

    return 0;
}
