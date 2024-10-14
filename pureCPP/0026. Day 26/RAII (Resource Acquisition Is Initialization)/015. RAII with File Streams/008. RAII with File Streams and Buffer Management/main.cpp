#include <iostream>
#include <fstream>

class BufferedFile {
    std::ofstream file;
public:
    BufferedFile(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
    }

    ~BufferedFile() {
        if (file.is_open()) {
            file.flush();  // Ensure buffered data is written.
            file.close();
            std::cout << "Buffered file closed and flushed." << std::endl;
        }
    }

    void writeData(const std::string& data) {
        if (file.is_open()) {
            file << data << std::endl;
        }
    }
};

int main() {
    {
        BufferedFile bufFile("buffered_output.txt");
        bufFile.writeData("Data with buffer management.");
    }
    std::cout << "Buffered file closed and flushed." << std::endl;
}
