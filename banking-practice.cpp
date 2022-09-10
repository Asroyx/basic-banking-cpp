#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 1234;
    int choice = 0;

    do
    {
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "******************\nEnter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:;
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);

            break;
        case 4:
            std::cout << "Thanks for visiting !\n";
            break;

        default:
            break;
        }

    } while (choice != 4);

    return 0;
}
void showBalance(double balance)
{
    std::cout << "Your balanace is $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
    double amount;

    std::cout << "Write your amount for deposit: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "invaild amount\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount;

    std::cout << "Write your amount for withdraw: ";
    std::cin >> amount;

    if (amount > 0 && amount <= balance)
    {
        return amount;
    }
    else
    {
        std::cout << "invaild amount\n";
        return 0;
    }
}
