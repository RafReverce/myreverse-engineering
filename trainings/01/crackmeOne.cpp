#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "ENTER PASSWORD: ";
    std::cin >> password;

    if (password == "hack_the_world") {
        std::cout << "\n[+] ACCESS GRANTED! YOU ARE A GOD.\n";
    } else {
        std::cout << "\n[-] WRONG! GO AWAY!\n";
    }

    system("pause");
    return 0;
}