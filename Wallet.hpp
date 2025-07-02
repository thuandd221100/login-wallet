#ifndef WALLET_HPP
#define WALLET_HPP
#include <string>

class Wallet {
private:
    std::string walletID;
    std::string owner;
    int balance;

public:
    Wallet();
    Wallet(std::string walletID, std::string owner, int balance);

    std::string getWalletID() const;
    std::string getOwner() const;
    int getBalance() const;

    void deposit(int amount);
    bool withdraw(int amount);

    std::string serialize() const;
    static Wallet deserialize(const std::string& line);
    void saveToFile();
};

#endif
