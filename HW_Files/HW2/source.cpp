//Author: Phillip Gooden
//Date: 2-11-2023
//Purpose: Write a program that reads students' names followed by their test scores. The program should output each student's name followed by the test scores and the relevant grade. It should also find and print the highest test score and the name of the students having the highest test score.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
//CONSTANTS
const int NUMofSTUDENTS{20};
const int ROW{5};
//POD STRUCT
class Students{
    public:
    string firstName, lastName;
    int testScore[5] = {};
    char grade;
};
//FUNCTIONS
void Read(Students student[NUMofSTUDENTS]);
char Grade(Students student[NUMofSTUDENTS]);
void HighScore(Students student[NUMofSTUDENTS]);
void Display(Students student[NUMofSTUDENTS]);

int main(){
    Students student[NUMofSTUDENTS];
    Read(student);
    Grade(student);
    HighScore(student);
    Display(student);
}

void Read(Students student[NUMofSTUDENTS]){
    ifstream intFile("intData.txt");
    ifstream stringFile("stringData.txt");

    if(intFile.good()&&stringFile.good()){
        for(int i{0}; i < NUMofSTUDENTS; i++){
            getline(stringFile, student[i].firstName, ',');
            getline(stringFile, student[i].lastName);
            for(int j{0}; j < ROW; j++){
            intFile >> student[i].testScore[j];
            }
        }
    }    
}

char Grade(Students student[NUMofSTUDENTS]){
    double sum[NUMofSTUDENTS];
    double average;
    
    for(int i{0}; i<NUMofSTUDENTS; i++){
        sum[i] = 0;
    for (int j{0}; j<ROW; j++){
        sum[i] += student[i].testScore[j];
    }
    average = sum[i] / ROW;
    //cout << average << ' ';
    if(average>=90){
        student[i].grade = 'A';
    }else if(average>=80 && average<90){
        student[i].grade = 'B';
    }else if(average>=70 && average<80){
        student[i].grade = 'C';
    }else if(average>=60 && average<70){
        student[i].grade = 'D';
    }else
        student[i].grade = 'F';
    }
    return student[NUMofSTUDENTS].grade;
}

void HighScore(Students student[NUMofSTUDENTS]){
    double sum[NUMofSTUDENTS];
    double highestSum = 0;
    int  highestStudentNum = 0;
        for(int i{0}; i<NUMofSTUDENTS; i++){
            sum[i] = 0;
        for (int j{0}; j<ROW; j++){
            sum[i] += student[i].testScore[j];
        }
        if (sum[i] > highestSum) {
           highestSum = sum[i];
           highestStudentNum = i;
        }
    }
    cout << "Highest score from student: " << left << setw(11) << '\n' << student[highestStudentNum].firstName  << student[highestStudentNum].lastName << ": " << highestSum / ROW << endl;
}


void Display(Students student[NUMofSTUDENTS]){

    for(int i{0}; i<NUMofSTUDENTS; i++){
        cout <<  student[i].firstName << left << setw(10) << student[i].lastName; 
        for (int j{0}; j<ROW; j++){
            cout << right << setw(2) << student[i].testScore[j] << ' ';
        }
        cout << "Grade: ";
        cout << student[i].grade;
        cout << endl;
    }
}

