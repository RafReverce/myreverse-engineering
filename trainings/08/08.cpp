#include <iostream>
#include <windows.h>
#include <string>

// Простая функция для имитации расшифровки "секрета"
void printSecret() {
    std::string secret = "FLAG{D3BUG_M3_IF_YOU_C4N}";
    std::cout << "\n[SUCCESS] Access Granted! Your secret: " << secret << std::endl;
}

int main() {
    std::cout << "--- Level 08: Anti-Debugging Challenge ---" << std::endl;
    std::cout << "Checking system integrity..." << std::endl;

    // IsDebuggerPresent возвращает 1, если процесс под отладкой
    if (IsDebuggerPresent()) {
        std::cout << "[ERROR] Debugger detected! Access denied." << std::endl;
        std::cout << "Close your debugger and try again." << std::endl;
        system("pause");
        return 1;
    }

    std::cout << "[OK] No debugger found. Proceeding..." << std::endl;
    printSecret();

    system("pause");
    return 0;
}
