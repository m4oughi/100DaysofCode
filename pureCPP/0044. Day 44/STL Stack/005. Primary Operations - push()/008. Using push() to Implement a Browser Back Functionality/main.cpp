#include <iostream>
#include <stack>

class BrowserHistory {
    std::stack<std::string> history;

public:
    void visitPage(const std::string& url) {
        history.push(url);
        std::cout << "Visited: " << url << std::endl;
    }

    void back() {
        if (!history.empty()) {
            std::cout << "Going back from: " << history.top() << std::endl;
            history.pop();
        } else {
            std::cout << "No previous page." << std::endl;
        }
    }
};

int main() {
    BrowserHistory browser;
    
    browser.visitPage("google.com");
    browser.visitPage("openai.com");
    browser.visitPage("github.com");

    browser.back();
    browser.back();
    browser.back();

    return 0;
}
