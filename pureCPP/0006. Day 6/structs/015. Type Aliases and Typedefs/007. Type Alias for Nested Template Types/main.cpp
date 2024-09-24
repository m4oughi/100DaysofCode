#include <iostream>
#include <map>

struct NestedAlias {
    using MapType = std::map<int, std::string>;  // Alias for a nested template type
    MapType data;
};

int main() {
    NestedAlias obj;
    obj.data[1] = "One";
    obj.data[2] = "Two";
    
    for (const auto& pair : obj.data) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}
