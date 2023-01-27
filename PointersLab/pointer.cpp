//Author: Phillip Gooden
//  Date: 01-26-2023
//Program Statment: Write a program that first reads an integer for the array 
// size , then reads numbers into the array, and displays distinct numbers (i.e.
// if a number appears multiple times, it is displayed only once).  (Hint: Read 
// a number and store it to an array if it is new. If the number is already in 
// the array, discard it.  After the input, the array contains the distinct 
// numbers.)

#include <iostream>
#include <fstream>


using namespace std;

int main(){
    cout << "Enter the number of elements in the array";
    int dynamicArray;
    cin >> dynamicArray;
    //declare dynamic array
    int* ptrDynamicArray = new int[dynamicArray];
    int size {0};

    for(int i {0}; i < dynamicArray; i++){
        int elements {0};
        cout << "Enter the value you want stored in the Array";
        cin >> elements;
        bool isInArray = false;
        for(int j {0}; j < elements; j++){
            if()
        }
    }
        
}
