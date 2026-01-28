#include <iostream>
#include <string>

int main() {
    // Пароль "Reverse26"
    // Ключ для каждого байта: 0x10, 0x11, 0x12... (увеличивается)
    unsigned char secret[] = { 0x62, 0x74, 0x64, 0x76, 0x66, 0x66, 0x73, 0x25, 0x20, 0x00 };
    std::string input;

    std::cout << "Enter Level 2 Password: ";
    std::cin >> input;

    if (input.length() != 9) {
        std::cout << "Wrong length!" << std::endl;
        return 0;
    }

    bool valid = true;
    for (int i = 0; i < 9; i++) {
        // Динамический XOR: каждый байт ксорится на (0x10 + i)
        if ((unsigned char)(input[i] ^ (0x10 + i)) != secret[i]) {
            valid = false;
            break;
        }
    }

    if (valid) {
        std::cout << "Success! You handled a dynamic key." << std::endl;
    } else {
        std::cout << "Access Denied!" << std::endl;
    }

    system("pause");
    return 0;
}