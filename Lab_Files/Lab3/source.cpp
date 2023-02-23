//Change this Program to have Two Functions (Read and Display)
//Create sets of name and grade as two separate input (text)  files
//Then convert the program to structure with having two members   Name and grades
//Then pass structure variable to the functions and input data two a proper member variable.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
//CONSTANTS
const int row = 6;
const int col = 7;
//
ifstream  namesData, intData;    // namesData is object for input name, ing is object for grades


struct Student{
   string name[row] = {}; //this array stors names
   int grades[row][col] = { {0},{0} };  //This array stors grade
};

void Read(int r, int c, Student student[6]);
void Display(int r, int c, Student student[6]);

int main()
{
    int r, c;              //loop control variable
    Student student[6];

    Read(r, c, student);
    Display(r, c, student);
    
    return 0;
}

void Read(int r, int c, Student student[6]){
    namesData.open("nameFile.txt");    //open file for names
    intData.open("gradeFile.txt");   //open file for grades

    for (r = 0; r < row; r++)    //Reading names
    {
        getline(namesData, student[r].name[r]);
        for (c = 0; c < col; c++)   // Reading grades
            intData >> student[r].grades[r][c];  //grades[0][0]
    }
    namesData.close();
    intData.close();
}
void Display(int r, int c, Student student[6]){
        for (r = 0; r < row; r++)
    {
        cout <<setw(20)<<left<<student[r].name[r];
        for (c = 0; c < col; c++)             // Reading grades
            cout << setw(5) << right << student[r].grades[r][c];    //grades[0][0]
        cout << endl;
    }
}