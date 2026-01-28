#include <iostream>
#include <string>

int main() {
    // "Secret123" зашифрованный с ключом 0x55
    unsigned char secret[] = { 0x06, 0x30, 0x36, 0x27, 0x30, 0x21, 0x64, 0x67, 0x66, 0x00 };
    std::string input;

    std::cout << "Enter Password: ";
    std::cin >> input;

    bool valid = true;
    for (int i = 0; i < 9; i++) {
        // XOR операция: если (input ^ 0x55) == secret, значит пароль верный
        if ((unsigned char)(input[i] ^ 0x55) != secret[i]) {
            valid = false;
            break;
        }
    }

    if (valid && input.length() == 9) {
        std::cout << "Access Granted! You are a hacker now." << std::endl;
    } else {
        std::cout << "Access Denied!" << std::endl;
    }

    system("pause");
    return 0;
}