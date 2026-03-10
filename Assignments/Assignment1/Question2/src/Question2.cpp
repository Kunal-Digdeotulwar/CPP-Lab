//============================================================================
// Name        : Question2.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class BankAccount {
private:
	int accountNumber;
	string accountHolderName;
	double balance;

public:

	void setAccountNumber(int accNo) {
		accountNumber = accNo;
	}

	void setAccountHolderName(string name) {
		accountHolderName = name;
	}

	void setBalance(double bal) {
		balance = bal;
	}

	int getAccountNumber() {
		return accountNumber;
	}

	string getAccountHolderName() {
		return accountHolderName;
	}

	double getBalance() {
		return balance;
	}

	void deposit(double amount) {
		balance = balance + amount;
		cout << "Amount Deposited Successfully\n";
	}

	void withdraw(double amount) {
		if (amount <= balance) {
			balance = balance - amount;
			cout << "Amount Withdrawn Successfully\n";
		} else {
			cout << "Insufficient Balance\n";
		}
	}

	void displayAccountDetails() {
		cout << "\nAccount Number: " << accountNumber << endl;
		cout << "Holder Name: " << accountHolderName << endl;
		cout << "Balance: " << balance << endl;
	}
};
int main() {
	BankAccount acc;
	int accNo, choice;
	string name;
	double amount, bal;

	cout << "Enter Account Number: ";
	cin >> accNo;
	acc.setAccountNumber(accNo);

	cout << "Enter Account Holder Name: ";
	cin >> name;
	acc.setAccountHolderName(name);

	cout << "Enter Initial Balance: ";
	cin >> bal;
	acc.setBalance(bal);

	do {
		cout << "\n------ BANK MENU ------\n";
		cout << "1. Deposit\n";
		cout << "2. Withdraw\n";
		cout << "3. Display Account Details\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter amount to deposit: ";
			cin >> amount;
			acc.deposit(amount);
			break;

		case 2:
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			acc.withdraw(amount);
			break;

		case 3:
			acc.displayAccountDetails();
			break;

		case 4:
			cout << "Exiting program...\n";
			break;

		default:
			cout << "Invalid choice\n";
		}

	} while (choice != 4);
	return 0;
}
