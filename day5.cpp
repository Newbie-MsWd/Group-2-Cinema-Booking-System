// OOP C++ Cinema Booking System
// Day 5: Payment System
#include <iostream>
using namespace std;

// Abstract class
class Payment {
public:
    virtual void processPayment(double amount) = 0;
    
};

class CashPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Cash payment of $" << amount << " processed.\n";
    }
};

class CreditCardPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Card payment of $" << amount << " processed.\n";
    }
};

int main() {
    const double Price = 5.5;
    int ticket;
    int choice;
    
    cout << "\nTicket Price Fixed At: $" << Price << endl;
    cout << "\n[*** Please Proceed to checkout ***]" << endl;

    cout << "Please input amount of ticket: " ;
    cin >> ticket;

    double Total = Price * ticket;

    cout << "\nChoose payment method:" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Card" << endl;
    cout << "Choice: ";
    cin >> choice;  

    Payment* Payment;

    if (choice == 1) {
        Payment = new CashPayment();
    }
    else if (choice == 2)
    {
        Payment = new CreditCardPayment();
    }
    else {
        cout << "Invalid choice" << endl;
    }

    Payment->processPayment(Total);
    delete Payment; 
    cout <<"Thanks you!" << endl;
    
    return 0;
}
