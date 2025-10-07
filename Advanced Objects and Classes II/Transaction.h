#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    std::string type;
    double amount;
    std::string timestamp;

    Transaction(const std::string& t, double a, const std::string& time)
        : type(t), amount(a), timestamp(time) {
    }
};

#endif
