// OOP C++ Cinema Booking System
// Day 4: nil class - Person & Customer Class

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Person {
private:
    string name;
    int phone ;
public:
    Person(string n, int p) : name(n), phone(p) {}

    void setName(const string& n) { name = n; }
    string getName() const { return name; }
    void setPhone(const int& p) { phone = p; }
    int getPhone() const { return phone; }  
};

class Customer : public Person {
    int customerID;
public:
    Customer(string n, int p) : Person(n, p) {
    customerID = rand() % 9000 + 1000; 
    }

    void displayCustomer() const {
    cout << "[-- Customer INFO --]" << endl;
    cout << "Customer ID: " << customerID << endl;
    cout << "Name: " << getName() << endl;
    cout << "Phone: " << getPhone() << endl;
    }
    int getCustomerID() const { return customerID; }
    void setCustomerID(int id) { customerID = id; }
};
int main() {
    srand(time(0));
    
    string name;
    int phone;
    cout << "[-- Please Enter Your Information Below --]" << endl;

    cout << "Name: " ;
    cin >> name;

    cout << "Phone Number: " ;
    cin >> phone; 

    Customer c1(name, phone);
    c1.displayCustomer();

return 0;
}
