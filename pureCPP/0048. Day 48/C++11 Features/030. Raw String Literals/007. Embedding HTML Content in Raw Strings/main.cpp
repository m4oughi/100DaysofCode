#include <iostream>

int main() {
    std::string html = R"(
        <html>
            <head><title>Raw String Example</title></head>
            <body><p>This is a paragraph inside an HTML document.</p></body>
        </html>
    )";

    std::cout << html << std::endl;
    return 0;
}
