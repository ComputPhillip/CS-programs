//author: Phillip Gooden
//submitted: 01-30-2023
//using three array(string names, int grades, and sum[ROW])
//calculate the sudents sum[ROW] test scores and display it
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

const int ROW{5};
const int COL{5};
const int sCOL{2};

void Read(int scores[ROW][COL], string names[ROW][sCOL]);
void Calculate(int scores[ROW][COL], double sum[ROW], double average[ROW]);
void Display(int scores[ROW][COL], string names[ROW][sCOL], double sum[ROW], double average[ROW]);

int main(){
    //create two objects to read data from two files
    int scores[ROW][COL];
    string names[ROW][sCOL];
    double sum[ROW] = {};
    double average[ROW] = {};
    Read(scores, names);
    Calculate(scores, sum, average);
    Display(scores, names,sum, average);

}

void Read(int scores[ROW][COL], string names[ROW][sCOL]){
    ifstream fileInt("intData.txt");
    ifstream fileString("stringData.txt");
    //check if intfile is open
    if(fileInt.good()){
        for(int i{0}; i < ROW; i++){
            for(int j{0}; j < COL; j++){
                fileInt >> scores[i][j];
            }
        }
    }//check if stringfile is open
    if(fileString.good()){
        for(int i{0}; i < ROW; i++){
            for(int j{0}; j < sCOL; j++){
                fileString >> names[i][j];
            }
        }
    }
}
void Calculate(int scores[ROW][COL], double sum[ROW], double average[ROW]){
    for(int i{0}; i < ROW; i++){
            for(int j{0}; j < COL; j++){
                scores[i][j];
                sum[i] = sum[i] + scores[i][j];
            }
            average[i] = sum[i] / COL;
            //cout << endl;
        }
}
void Display(int scores[ROW][COL], string names[ROW][sCOL], double sum[ROW], double average[ROW]){
    for(int i{0}; i < ROW; i++){
        for(int j{0}; j < sCOL; j++){
            cout << setw(10) << left << names[i][j] << ' ';
            }
            for(int k{0}; k < COL; k++){
                cout << setw(3) << right << scores[i][k] << ' ';
            }
            
            cout << "Average: " << setprecision(5) << average[i] << ' ';
            cout << '\n';
        }
}