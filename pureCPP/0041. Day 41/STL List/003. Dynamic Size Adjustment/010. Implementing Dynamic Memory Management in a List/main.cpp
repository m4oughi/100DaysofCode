#include <iostream>
#include <list>

class Data {
public:
    int value;
    Data(int v) : value(v) {
        std::cout << "Object with value " << v << " created." << std::endl;
    }
    ~Data() {
        std::cout << "Object with value " << value << " destroyed." << std::endl;
    }
};

int main() {
    std::list<Data> dataList;
    
    dataList.emplace_back(10);
    dataList.emplace_back(20);
    dataList.emplace_back(30);

    std::cout << "Clearing the list..." << std::endl;
    dataList.clear();  // All dynamically created objects will be destroyed

    return 0;
}
