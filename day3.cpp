// OOP C++ Cinema Booking System
// Day 3: nil class - ShowTime Class

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ShowTime {
    private:
        string time;
    public:
        ShowTime(string t): time(t) {}

        void displayShowTime() {
            cout << " | Time: " << time << endl;
        }
    string getTime() {return time;}
};

int main() {
    vector<ShowTime>times {
        ShowTime("9:00 am"),
        ShowTime("10:00 am"),
        ShowTime("1:00 pm"),
        ShowTime("2:00 pm"),
        ShowTime("3:00 pm"),
    };

    // Display Movie
    cout << " " << endl;
    cout << "----- [ Available Times ]-----" << endl;
    cout << " " << endl;
     for(int t = 0; t < times.size(); t++) {
        cout << t+1 << ". ";
        times[t].displayShowTime();
    }

    // Time choice
    int timeChoice ;
    cout << "Please select a time: " ;
    cin >> timeChoice ;
    timeChoice--;
    if (timeChoice < 0 || timeChoice >= times.size()) {
        cout << "Invalid Selection" << endl;
    }
    else {
        cout << "[-- Time selection confirmed --]" << endl;
        cout << "Time: " <<times[timeChoice].getTime() << endl;
    }
        


    return 0;
}

// later link Movie and room class together 