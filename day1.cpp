// OOP C++ Cinema Booking System
// Day 1: nil class - Movie Class

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// movie class
class Movie {
    private:
        string title;
        string genre;
        int duration;
        float rating;
    public:
        Movie(string t, string g, int d, float r) {
            title = t;
            genre = g;
            duration = d;
            rating = r;
        }

        void displayMovie() {
            cout << "Movies: "<< title <<" | " << genre <<" | " << duration << "-mins " << " | " << rating << "/10-Rating" << endl;
        }

    string getTitle() {return title;}
    string getGenre() {return genre;}
    int getDuration() {return duration;}
};

int main() {
     vector<Movie> movies = {
        Movie("Avatar 2", "Sci-Fi", 192, 8.2),
        Movie("Inception", "Action", 148, 5.8),
        Movie("Transformer", "Sci-Fi", 165, 9.2),
        Movie("Pacific rim", "Action", 143, 9.8)
    };
    
    // Display Movie
    cout << " " << endl;
    cout << "----- [ Available Movies ]-----" << endl;
    cout << " " << endl;
    for(int i = 0; i < movies.size(); i++) {
        cout << i+1 << ". ";
        movies[i].displayMovie();
    }

    // Movie Selection 
    int movieChoice;
    cout << "Select movie (enter number): ";
    cin >> movieChoice;
    movieChoice--;
    if (movieChoice < 0 || movieChoice >= movies.size()) {
        cout << "Invalid Selection" << endl;
    }
    else {
        cout << "[-- Movie selection confirmed --]" << endl;
        cout << movies[movieChoice].getTitle() << " | " << movies[movieChoice].getGenre() << " | " << movies[movieChoice].getDuration()<< "-mins" << endl;
    }
        
    return 0;

}
