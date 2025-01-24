#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> store1 = {"Apples", "Bananas", "Carrots", "Dates"};
    std::vector<std::string> store2 = {"Bananas", "Cherries", "Dates", "Eggplants"};
    std::vector<std::string> result;

    std::set_symmetric_difference(store1.begin(), store1.end(),
                                   store2.begin(), store2.end(),
                                   std::back_inserter(result));

    std::cout << "Items available in one store but not both: ";
    for (const auto& item : result) {
        std::cout << item << " ";
    }

    return 0;
}
