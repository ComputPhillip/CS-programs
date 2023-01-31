//author: Phillip Gooden
//submitted: 01-30-2023
//using three array(string names, int grades, and average)
//calculate the sudents average test scores and display it
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

const int GRADES = 5;

void Read(int scores[GRADES], string firstName, string lastName, double avg);

int main() {
    string firstName, lastName;
    int scores[GRADES];
    double avg = 0.0;
    Read(scores,firstName,lastName, avg);
}

void Read(int scores[GRADES], string firstName, string lastName, double avg){
    ifstream file("data.txt");
    double total = 0;
    while (file >> lastName >> firstName) {
        double total = 0;
        for (int i = 0; i < GRADES; i++) {
            file >> scores[i];
            total += scores[i];
        }
        avg = total / GRADES;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Scores: ";
        for (int i = 0; i < GRADES; i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
        cout << "Average: " << avg << endl << endl;
    }
    file.close();
}
