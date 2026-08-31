#include <iostream>
using namespace std;

class Bank
{
    int balance, age;
    string name;

public:
    void new_acc()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Balance : ";
        cin >> balance;
        cout << "Enter Age : ";
        cin >> age;
    }

    int get_balance()
    {
        return balance;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Successfully Withdrawn";
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }

    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount";
        }
        else
        {
            balance += amount;
            cout << "Successfully Deposited";
        }
    }
};

int main()
{
    Bank b;
    int choice,amount;

    while (choice != 5)
    {
        cout << "1 - New Account \n2 - CheckBal \n3 - Deposit \n4 - Withdraw \n5 - Exit \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.new_acc();
            break;
        case 2:
            cout << "Balance = " << b.get_balance();
            break;
        case 3:
            cout << "Enter Amount : ";
            cin >> amount;
            b.deposit(amount);
            break;

        case 4:
            cout << "Enter Amount : ";
            
            cin >> amount;
            b.withdraw(amount);
            break;
        case 5:
            exit(0);
            break;
        }
    }
}