#include <iostream>
#include <vector>
#include <iterator>

class CustomContainer {
    std::vector<int> data;

public:
    void add(int value) { data.push_back(value); }

    auto begin() { return data.begin(); }
    auto end() { return data.end(); }

    friend std::ostream& operator<<(std::ostream& os, const CustomContainer& container) {
        for (int val : container.data) {
            os << val << " ";
        }
        return os;
    }
};

int main() {
    CustomContainer customContainer;
    std::vector<int> source = {10, 20, 30};

    auto it = std::back_insert_iterator<std::vector<int>>(customContainer.data);
    std::copy(source.begin(), source.end(), it);

    std::cout << "Custom container after insertion: " << customContainer << std::endl;

    return 0;
}
