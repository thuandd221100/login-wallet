#include <iostream>
#include "User.hpp"
#include "Wallet.hpp"
#include "Transaction.hpp"
#include "OTP.hpp"
#include "Utils.hpp"

void showMainMenu() {
    std::cout << "===== Reward Wallet System =====\n";
    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose option: ";
}

int main() {
    int option;
    while (true) {
        showMainMenu();
        std::cin >> option;
        switch (option) {
            case 1:
                // TODO: Handle user registration
                break;
            case 2:
                // TODO: Handle user login
                break;
            case 3:
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid option. Try again.\n";
        }
    }
    return 0;
}
