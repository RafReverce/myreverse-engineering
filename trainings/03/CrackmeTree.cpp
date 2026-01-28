#include <iostream>

int main() {
    int secret = 0x5F37; 
    int input;
    
    std::cout << "Enter access code: ";
    std::cin >> input;

    if (input == (secret ^ 0x1234)) { 
        std::cout << "Success!" << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
    return 0;
}