#pragma once

class BankAccount
{
    int AccountNumber;
    double Balance;
public:
    BankAccount() : AccountNumber(0), Balance(0){}
    BankAccount(int AccountNumber) : AccountNumber(AccountNumber), Balance(0){}
    BankAccount(int AccountNumber, double Balance) : AccountNumber(AccountNumber), Balance(Balance){}

    void Deposit(double Delta);
    void Withdraw(double Delta);
    double GetBalance();
};
