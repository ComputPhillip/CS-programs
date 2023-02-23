//Author: Phillip Gooden
//Date: 2-07-2023
//Purpose: Write a program that uses a struct named MovieData to store POD
//Program should create two MovieData varaibles store values in their members and pass each one into a function
//Finally display the information
#include<iostream>
#include<string>
#include<iomanip>


using namespace std;

struct MovieData{
    string title;//movie title
    string director;//director of movie
    int year;//year movie was created
    int length;//length of movie
    long double revenue; //total revenue for movie
};

//void display(MovieData m1)
void Display(MovieData m);

int main(){
    MovieData m1 = { "Avatar: The Way of Water", "James Cameron", 2022, 192, 2'214'990'702 };
    MovieData m2 = { "Black Panther: Wakanda Forever", "Ryan Coogler", 2022, 162, 855'000'000 };
    Display(m1);
    Display(m2);
    return 0;
}

void Display(MovieData m){
    cout << left  << setw(20) << "Movie Title: " << m.title << '\n' 
    << left  << setw(20) << "Movie Director: "   << m.director << '\n'
    << left  << setw(20) << "Movie Length: "     << m.length << '\n' 
    << left  << setw(20) << "Movie Year: "       << m.year << '\n'
    << left  << setw(20) << "Movie Revenue: ";
    std::cout << '$' << std::put_money(m.revenue) << std::endl << std::endl;
}