#include <iostream>
#include <fstream>

class ResourceManager {
private:
    int* data;
    std::ofstream file;
public:
    ResourceManager(int size, const std::string& fileName) {
        data = new int[size];  // Allocate memory
        std::cout << "Memory allocated for array of size " << size << "." << std::endl;
        
        file.open(fileName);
        if (file.is_open()) {
            std::cout << "File opened: " << fileName << std::endl;
        } else {
            std::cout << "Failed to open file." << std::endl;
        }
    }
    
    ~ResourceManager() {
        delete[] data;  // Deallocate memory
        std::cout << "Memory deallocated." << std::endl;
        
        if (file.is_open()) {
            file.close();  // Close file
            std::cout << "File closed." << std::endl;
        }
    }
};

int main() {
    ResourceManager rm(5, "example.txt");
    // Destructor will clean up resources automatically
    return 0;
}
