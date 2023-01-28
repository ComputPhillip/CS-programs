#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string line;
    fstream file("data.txt", ios::in);
    while (!file.eof()){
        getline(file, line);
        stringstream ss(line);
        string firstName;
        getline(ss, firstName, ' ');
        string lastName;
        getline(ss, lastName, ' ');
        //cout << firstName << ' ' << lastName << endl;
        int grades[5];
        for(int i {0}; i < 5; i++){
            ss >> grades[i];
            cout << grades[i] << ' ';
        }      
        cout << endl;
    }
    file.close();
}

