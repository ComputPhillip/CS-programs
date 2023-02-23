#include <iostream>
#include <string>
#include <fstream>

using namespace std;
const int row = 5;

struct Students{
    string name;
    int scores[row];
    int sum;
    float avg;
};

int main(){
    fstream scoresData("intData.txt");
    fstream namesData("stringData.txt");
    Students student[5];

    if(scoresData.good() && namesData.good()){//if both files are open read data from files
        //grab names and store them into Student struct
        for(int i = 0; i < 5; i++){
            getline(namesData, student[i].name);
            cout << student[i].name << ' ';
            for(int j = 0; j < row; j++){
                scoresData >> student[i].scores[j];
                cout << student[i].scores[j] << ' ';
                student[i].sum += student[i].scores[j];
            }
            student[i].avg = (float)student[i].sum / row;
            cout << "Average: " << student[i].avg;
            cout << endl;
        }
    }
}