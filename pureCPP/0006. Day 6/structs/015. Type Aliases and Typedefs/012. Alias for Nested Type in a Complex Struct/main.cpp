#include <iostream>
#include <map>

template <typename K, typename V>
struct ComplexAlias {
    using MapType = std::map<K, V>;  // Alias for a complex type
    
    MapType mapping;
    
    void addMapping(K key, V value) {
        mapping[key] = value;
    }
    
    void display() const {
        for (const auto& pair : mapping) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }
};

int main() {
    ComplexAlias<int, std::string> obj;
    obj.addMapping(1, "One");
    obj.addMapping(2, "Two");
    obj.display();
    
    ComplexAlias<std::string, double> obj2;
    obj2.addMapping("A", 1.1);
    obj2.addMapping("B", 2.2);
    obj2.display();
}
