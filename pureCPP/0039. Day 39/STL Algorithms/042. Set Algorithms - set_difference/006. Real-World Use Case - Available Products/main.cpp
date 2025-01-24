#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> storeProducts = {"Apple", "Banana", "Carrot", "Date", "Eggplant"};
    std::vector<std::string> onlineCatalog = {"Banana", "Carrot", "Date"};
    std::vector<std::string> availableOnlyInStore;

    std::set_difference(storeProducts.begin(), storeProducts.end(),
                        onlineCatalog.begin(), onlineCatalog.end(),
                        std::back_inserter(availableOnlyInStore));

    std::cout << "Products only in store: ";
    for (const auto& product : availableOnlyInStore) {
        std::cout << product << " ";
    }

    return 0;
}
