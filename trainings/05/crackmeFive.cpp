#include <iostream>
#include <string>

int main() {
    std::string val;
    std::cout << "Data input: ";
    std::cin >> val;

    if (val == "pass_2026") {
        std::cout << "\n[+] Status: 777-OK-BLUE\n";
    } else {
        std::cout << "\n[-] Status: 404-NULL-RED\n";
    }

    system("pause");
    return 0;
}