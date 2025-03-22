#include <iostream>
#include <string_view>

int main() {
    std::string_view view = "  Trimmed Text  ";
    
    view.remove_prefix(2);  // Remove leading spaces
    view.remove_suffix(2);  // Remove trailing spaces

    std::cout << "Trimmed: '" << view << "'\n";

    return 0;
}
