// OOP C++ Cinema Booking System
// Day 2: nil class - Room Class

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

// Room Class
class Room {
    private:
        int roomNumber;
        const int rows = 6;
        const int cols = 10;
        vector<vector<bool>> seats; // f = available, t = occupied 2D vector for easy access to Row and column
    public:
        Room() {
            roomNumber = rand() % 10 + 1;   // generate rand roomNum from 1-10
            seats.resize(rows, vector<bool>(cols, false));
        }
        
        bool bookSeat (char row, int col) {
        row = toupper(row);
        
        int r = row - 'A'; // <-- Convert int to a letter using ASCII
        int c = col - 1;

        if (row < 'A' || row > 'G' || col <= 0 || col > cols) {
            cout << "Invalid Seat" << endl;
            return false;
        }

        if (seats[r][c]) {
            cout << "seats: " << row << col << "seat occupied" << endl;
            return false;
        }
        
        cout << " " << endl;

        seats[r][c] = true;
            cout << "seats: " << row << col << " seat booked successfully" << endl;
            return true;
        }

        void displaySeat() {
            cout << "\nRoom Number: " << roomNumber << endl;
            cout << "----- [ Available Chair ] -----" << endl;

            for (int r = 0; r < rows; r++) {
                cout << char('A' + r) << " " ;

                for (int c = 0; c < cols; c++) {
                    if (seats[r][c]) {
                        cout << "[ X ]";
                    }
                    else {
                        cout << "[ O ]";
                    }    
                }
                cout << endl; 
            }
        }   
    int getRoomNumber() { return roomNumber; }   
};
int main() {
    srand(time(0));

    Room r1;
    r1.displaySeat();

    int seatCount;
    cout << "How many seat do you want to book ? (Number only): ";
    cin >> seatCount;

    vector<pair<char, int>> bookedSeats;

    for (int s = 0; s < seatCount; s++) {
        char row;
        int col;

        cout << "Seats: " << s + 1 << endl;
        cout << "Enter your rows(A - G): " ;
        cin >> row;
        cout << "Enter your cols(1 - 10): " ;
        cin >> col;

        if (!r1.bookSeat(row, col)) {
            cout << "Try again!" << endl;
            s--; // retry same seat
        } else {
            bookedSeats.push_back({toupper(row), col}); 
        }
        r1.displaySeat();
    }
    cout << "Thank you!" << endl;
    return 0;
    }

    


    
