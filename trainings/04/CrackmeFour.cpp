#include <iostream>
#include <string>

int main() {
    std::string key = "\x27\x24\x2c\x28\x2f\x28"; // Зашифровано
    std::string input;
    
    std::cout << "Enter key: ";
    std::cin >> input;

    for (int i = 0; i < 6; i++) {
        key[i] ^= 0x41; // Расшифровка "на лету"
    }

    if (input == key) {
        std::cout << "Unlocked!" << std::endl;
    }
    return 0;
}