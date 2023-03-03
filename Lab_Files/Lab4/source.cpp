//Author: Phillip Gooden
//Date: 2-07-2023
//Purpose: Write a program that uses a struct named MovieData to store POD
//Program should create two MovieData varaibles store values in their members and pass each one into a function
//Finally display the information
#include <iostream>
#include <string>
#include <iomanip>

const int movieNum{2};

class Movie {
public:
    std::string title;
    std::string director;
    int year;
    int duration_minutes;
    double box_office;

    // Constructor
    Movie(std::string title, std::string director, int year, int duration_minutes, double box_office)
        : title(title), director(director), year(year), duration_minutes(duration_minutes), box_office(box_office)
    {}
};

void Display(Movie movie[movieNum]);

int main() {
    Movie movie[movieNum] = {
        Movie{"Avatar: The Way of Water", "James Cameron", 2022, 192, 2214990702.0},
        Movie{"Black Panther: Wakanda Forever", "Ryan Coogler", 2022, 162, 855000000.0}
    };

    Display(movie);

    return 0;
}

void Display(Movie movie[movieNum]){
    for(int i{0}; i<movieNum; i++){
        std::cout << "Title: " << movie[i].title << std::endl;
        std::cout << "Director: " << movie[i].director << std::endl;
        std::cout << "Year: " << movie[i].year << std::endl;
        std::cout << "Duration: " << movie[i].duration_minutes << " minutes" << std::endl;
        std::cout << "Box office: $" << std::put_money(movie[i].box_office) << std::endl;
        std::cout << std::endl;
    }
}
