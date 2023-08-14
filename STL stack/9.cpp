// Create back button functionality using stack.


#include <iostream>
#include <stack>
#include <string>

class Browser {
private:
    std::stack<std::string> history;

public:
    void navigateTo(const std::string& url) {
        history.push(url);
    }

    void goBack() {
        if (!history.empty()) {
            std::cout << "Going back to: " << history.top() << std::endl;
            history.pop();
        } else {
            std::cout << "No more pages to go back to." << std::endl;
        }
    }
};

int main() {
    Browser browser;

    browser.navigateTo("https://www.example.com");
    browser.navigateTo("https://www.google.com");
    browser.navigateTo("https://www.openai.com");

    browser.goBack();
    browser.goBack();
    browser.goBack();
    browser.goBack();

    return 0;
}
