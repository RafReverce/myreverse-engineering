#include <iostream>
#include <windows.h>
#include <string>

int getKey() {
    if (IsDebuggerPresent()) {
        return 0xAA; // Ложный ключ для хакеров
    }
    return 0x33; // Правильный ключ
}

int main() {
    unsigned char secret[] = { 0x75, 0x7f, 0x72, 0x74, 0x48, 0x03, 0x03, 0x03 }; // "SECRET!!!" в XOR
    int key = getKey();

    if (key == 0xAA) {
        std::cout << "Debugger detected! Using fake decryption key..." << std::endl;
    } else {
        std::cout << "System clean. Using master key..." << std::endl;
    }

    std::cout << "Decrypted message: ";
    for (int i = 0; i < 8; i++) {
        std::cout << (char)(secret[i] ^ key);
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}