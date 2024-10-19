#include <iostream>
#include <fstream>

class MultiResourceRAII {
    std::fstream file;
    int* data;
public:
    MultiResourceRAII(const std::string& filename, int value) {
        file.open(filename, std::ios::out | std::ios::trunc);
        if (file.is_open()) {
            std::cout << "File opened!" << std::endl;
        }
        data = new int(value);
        std::cout << "Memory allocated!" << std::endl;
    }

    ~MultiResourceRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed!" << std::endl;
        }
        delete data;
        std::cout << "Memory deallocated!" << std::endl;
    }

    void writeToFile(const std::string& content) {
        if (file.is_open()) {
            file << content;
        }
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    {
        MultiResourceRAII obj("multi_resource.txt", 400);
        obj.writeToFile("RAII with multiple resources\n");
        obj.display();
    }  // Both the file and memory are properly released when the object goes out of scope
    return 0;
}
