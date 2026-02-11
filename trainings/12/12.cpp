#include <iostream>
#include <windows.h>

int main() {
    if (IsDebuggerPresent()) {
        std::cout << "Detected!" << std::endl;
    } else {
        std::cout << "Clean" << std::endl;
    }
    system("pause");
    return 0;
}