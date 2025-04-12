#include <iostream>
#include <map>
#include <string>

enum class OS { Windows, Linux, Mac };

std::map<OS, std::string> osToStr = {
    {OS::Windows, "Windows"},
    {OS::Linux, "Linux"},
    {OS::Mac, "Mac"}
};

std::map<std::string, OS> strToOs = {
    {"Windows", OS::Windows},
    {"Linux", OS::Linux},
    {"Mac", OS::Mac}
};

int main() {
    OS os = OS::Linux;
    std::cout << "OS: " << osToStr[os] << "\n";

    std::string input = "Mac";
    std::cout << "Parsed: " << static_cast<int>(strToOs[input]) << "\n";
}
