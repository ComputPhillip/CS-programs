#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// Johnson   Marieta     85   83  77   91  76
// Aniston     Saboly      80   90   95   93  48
// Cooper     Mancini    81   91   90   83  58
// Gupta       Piota        70   50   85   73  68
// Blair          Coviani    60   90   75   53  98

int main(){
    int grades[5][5] = {{ 85, 83, 77, 91, 76 },
                       { 80, 90, 95, 93, 48 },
                       { 81, 91, 90, 83, 58 }, 
                       { 70, 50, 85, 73, 68 },
                       { 60, 90, 75, 53, 98 }};
    std::string names [5][2] = {{"Johnson"}, {"Marieta"},
                                {"Aniston"}, {"Saboly"},
                                {"Cooper"}, {"Mancini"},
                                {"Gupta"}, {"Piota"},
                                {"Blair"}, {"Coviani"},};

    std::fstream outFile;
    outFile.open("grades.txt", std::ios::out);
    if(outFile.is_open()){
    std::cout << "file is open\n";
    }else
    std::cout << "file is closed, retry attempt\n";

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            outFile << grades[i][j] << ' ';
        }
    outFile << '\n';
    }


}