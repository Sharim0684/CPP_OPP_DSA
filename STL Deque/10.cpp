#include <iostream>
#include <deque>
#include <string>

bool canBeMadeEqual(const std::string& s1, const std::string& s2) {
    if (s1 == s2) {
        return true;
    }

    int len1 = s1.length();
    int len2 = s2.length();

    if (std::abs(len1 - len2) > 1) {
        return false;
    }

    std::deque<char> dq1(s1.begin(), s1.end());
    std::deque<char> dq2(s2.begin(), s2.end());

    int diffs = 0;

    while (!dq1.empty() && !dq2.empty()) {
        if (dq1.front() != dq2.front()) {
            ++diffs;
            if (diffs > 1) {
                return false;
            }

            if (len1 > len2) {
                dq1.pop_front();
            } else if (len2 > len1) {
                dq2.pop_front();
            } else {
                dq1.pop_front();
                dq2.pop_front();
            }
        } else {
            dq1.pop_front();
            dq2.pop_front();
        }
    }

    return true;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;

    if (canBeMadeEqual(str1, str2)) {
        std::cout << "The strings can be made equal by inserting at most one character." << std::endl;
    } else {
        std::cout << "The strings cannot be made equal by inserting at most one character." << std::endl;
    }

    return 0;
}
