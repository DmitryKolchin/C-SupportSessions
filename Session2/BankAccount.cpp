#include "BankAccount.h"

void BankAccount::Deposit(double Delta)
{
    if (Delta < 0)
    {
        return;
    }
    Balance += Delta;

}

void BankAccount::Withdraw(double Delta)
{
    if (Delta < 0)
    {
        return;
    }
    if (Balance < Delta)
    {
        Balance = 0;
        return;
    }

    Balance -= Delta;

}

double BankAccount::GetBalance()
{
    return Balance;
}
