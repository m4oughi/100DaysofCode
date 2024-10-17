#include <iostream>
#include <vector>
#include <utility>  // For std::swap

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    
    std::cout << "Before swap: v1 = {";
    for (auto& i : v1) std::cout << i << " ";
    std::cout << "}, v2 = {";
    for (auto& i : v2) std::cout << i << " ";
    std::cout << "}" << std::endl;
    
    std::swap(v1, v2);
    
    std::cout << "After swap: v1 = {";
    for (auto& i : v1) std::cout << i << " ";
    std::cout << "}, v2 = {";
    for (auto& i : v2) std::cout << i << " ";
    std::cout << "}" << std::endl;
}
