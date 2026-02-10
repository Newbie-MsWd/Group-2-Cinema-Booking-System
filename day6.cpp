// OOP C++ Cinema Booking System
// Day 6: Booking Class

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Booking {
private:
    string movieName;   
    int bookingID; 
    const double ticketPrice = 12.50; 
    int ticketCount;
    string time;
    int roomNumber;

public:
    Booking(int bid, int tCount = 0)
        : bookingID(bid), ticketCount(tCount), movieName("Avatar"), time("1:00 PM") {
        roomNumber = rand() % 10 + 1;
    }

    ~Booking() {
        // On destruction, free seats if needed, but handled in cancel
    }

    void setTicketCount() { 
        cout << "Enter number of tickets: ";
        cin >> ticketCount;
    }

    double calculateBill() const {
        return ticketPrice * ticketCount; 
    }
    void showBookingInfo() const {
        cout << "\n--- Booking Details ---\n";
        cout << "Booking ID: " << bookingID << '\n';
        cout << "Movie: " << movieName << '\n';
        cout << "Showtime: " << time << '\n';
        cout << "Room Number: " << roomNumber << '\n';
        cout << "Total Bill: $" << calculateBill() << '\n';
    }

    void cancel() {
        cout << "Booking " << bookingID << " canceled and seats freed.\n";
    }

    int getBookingID() { return bookingID; }
};

int main() {

    Booking b1(1021);
    b1.setTicketCount();
    b1.calculateBill();
    b1.showBookingInfo();
    b1.cancel();


    return 0;
}

