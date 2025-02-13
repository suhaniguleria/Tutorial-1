#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
   private:
       int accountNumber;
       double balance;
       string accountHolderName;

   public:
       BankAccount(int accNumber, string accHolderName, double initialBalance) 
	{
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance = balance + amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } 
		else 
		{
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance = balance - amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } 
		else if (amount > balance) 
		{
            cout << "Insufficient balance. Current Balance : " << balance << endl;
        } 
		else 
		{
            cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        }
    }

    void displayBalance() 
	{
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    int accNumber;
    string accHolderName;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Account Holder Name: ";
    cin.ignore(); 
    getline(cin, accHolderName);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(accNumber, accHolderName, initialBalance);

    int choice;
    double amount;

    do 
	{
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Exiting the program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } 
	while (choice != 4);

    return 0;
}
