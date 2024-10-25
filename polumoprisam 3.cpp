#include <iostream>
using namespace std;

class Transaction {
protected:
    int transaction_ID;
    string date;

public:
    virtual void recordTransaction() = 0;
    virtual void displayInfo() = 0;
};

class IncomeTransaction : public Transaction {
protected:
    string source;
    int amount;

public:
    void recordTransaction() override {
        cout << "Enter transaction id: ";
        cin >> transaction_ID;
        cout << "Enter date: ";
        cin >> date;
        cout << "Enter source: ";
        cin >> source;
        cout << "Enter amount: ";
        cin >> amount;
    }

    void displayInfo() override {
        cout << "Transaction id: " << transaction_ID << endl;
        cout << "Date: " << date << endl;
        cout << "Source: " << source << endl;
        cout << "Amount: " << amount << endl;
    }
};

class ExpenseTransaction : public Transaction {
protected:
    string reason;
    int amount;

public:
    void recordTransaction() override {
        cout << "Enter transaction id: ";
        cin >> transaction_ID;
        cout << "Enter date: ";
        cin >> date;
        cout << "Enter reason: ";
        cin >> reason;
        cout << "Enter amount: ";
        cin >> amount;
    }

    void displayInfo() override {
        cout << "Transaction id: " << transaction_ID << endl;
        cout << "Date: " << date << endl;
        cout << "Reason: " << reason << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main() {
    IncomeTransaction income;
    ExpenseTransaction expense;

    cout << "Recording Income Transaction:" << endl;
    income.recordTransaction();
    cout << "\nDisplaying Income Transaction:" << endl;
    income.displayInfo();

    cout << "\nRecording Expense Transaction:" << endl;
    expense.recordTransaction();
    cout << "\nDisplaying Expense Transaction:" << endl;
    expense.displayInfo();

    return 0;
}

