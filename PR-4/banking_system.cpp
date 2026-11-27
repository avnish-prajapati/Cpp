#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;

private:
    double balance;

public:
    BankAccount(int no, string name, double bal)
    {
        accountNumber = no;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Amount!" << endl;
        }
    }

    virtual void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    virtual void calculateInterest()
    {
        cout << "Interest Not Available!" << endl;
    }

    virtual void displayAccountInfo()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << accountHolderName;
        cout << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
    double rate;

public:
    SavingsAccount(int no, string name, double bal, double r)
        : BankAccount(no, name, bal)
    {
        rate = r;
    }

    void calculateInterest()
    {
        double interest = getBalance() * rate / 100;
        cout << "Savings Interest: " << interest << endl;
    }
};

class CheckingAccount : public BankAccount
{
    double limit;

public:
    CheckingAccount(int no, string name, double bal, double l)
        : BankAccount(no, name, bal)
    {
        limit = l;
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount <= getBalance() + limit)
        {
            double oldBalance = getBalance();

            if(amount <= oldBalance)
            {
                BankAccount::withdraw(amount);
            }
            else
            {
                BankAccount::withdraw(oldBalance);
                cout << "Overdraft Limit Used!" << endl;
            }
        }
        else
        {
            cout << "Overdraft Limit Exceeded!" << endl;
        }
    }

    void checkOverdraft()
    {
        cout << "Overdraft Limit: " << limit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
    int months;

public:
    FixedDepositAccount(int no, string name, double bal, int m)
        : BankAccount(no, name, bal)
    {
        months = m;
    }

    void calculateInterest()
    {
        double interest = getBalance() * 7 * months / (100 * 12);
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

int main()
{
    SavingsAccount s(101, "Jayesh", 10000, 5);
    CheckingAccount c(102, "Rahul", 5000, 2000);
    FixedDepositAccount f(103, "Amit", 20000, 12);

    BankAccount *ptr;

    int choice, subChoice;
    double amount;

    do
    {
        cout << "\n===== BANKING SYSTEM =====";
        cout << "\n1. Savings Account";
        cout << "\n2. Checking Account";
        cout << "\n3. Fixed Deposit Account";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
            ptr = &s;
        else if(choice == 2)
            ptr = &c;
        else if(choice == 3)
            ptr = &f;
        else if(choice == 4)
        {
            cout << "Thank You For Using Banking System!";
            break;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
            continue;
        }

        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";

        if(choice == 1 || choice == 3)
            cout << "\n4. Calculate Interest";
        else
            cout << "\n4. Check Overdraft";

        cout << "\n5. Account Information";
        cout << "\nEnter Your Choice: ";
        cin >> subChoice;

        switch(subChoice)
        {
            case 1:
                cout << "Enter Amount: ";
                cin >> amount;
                ptr->deposit(amount);
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                ptr->withdraw(amount);
                break;

            case 3:
                cout << "Balance: " << ptr->getBalance() << endl;
                break;

            case 4:
                if(choice == 2)
                    c.checkOverdraft();
                else
                    ptr->calculateInterest();
                break;

            case 5:
                ptr->displayAccountInfo();
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}