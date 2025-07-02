#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP
#include <string>

class Transaction {
public:
    static bool executeTransfer(const std::string& fromWallet, const std::string& toWallet, int amount);
};

#endif
