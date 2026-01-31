#include <iostream>
#include <windows.h>

void FinalBossCheck() {
    // 1. Стандартная проверка (EAX)
    if (IsDebuggerPresent()) {
        std::cout << "[!] Trap 1 triggered! Closing..." << std::endl;
        exit(1);
    }

    // 2. Проверка через CheckRemoteDebuggerPresent
    // Она записывает результат (0 или 1) по адресу в памяти.
    BOOL isDebuggerPresent = FALSE;
    CheckRemoteDebuggerPresent(GetCurrentProcess(), &isDebuggerPresent);
    
    if (isDebuggerPresent) {
        std::cout << "[!] Trap 2 triggered! Ninja detected!" << std::endl;
        exit(1);
    }

    std::cout << "\n=== [SUCCESS] YOU BYPASSED ALL PROTECTIONS ===\n" << std::endl;
}

int main() {
    std::cout << "Starting protection sequence..." << std::endl;
    FinalBossCheck();
    system("pause");
    return 0;
}