//Author: Phillip Gooden
//Date: 2/5/2023
//Purpose: Create a dynamic array to store unknown numbers if numbers are repeated then do not display them to the console

#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Please enter the size of the dynamic array: ";
  cin >> size;
  int *numbers = new int[size]; // Dynamically allocate an array using new
  int count = 0; // Keep track of the number of distinct numbers

  // Read numbers into the array
  int number;
  for (int i = 0; i < size; i++) {
    cout << "Enter position " << i+1 << ": ";
    cin >> number;
    bool found = false;
    // Check if the number is already in the array
    for (int j = 0; j < count; j++) {
      if (numbers[j] == number) {
        found = true;
        break;
      }
    }
    if (!found) {
      numbers[count++] = number;
    }
  }

  cout << "The distinct number[s] found in this array are: ";
  // Display the distinct numbers
  for (int i = 0; i < count; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  // Deallocate the memory
  delete[] numbers;

  return 0;
}
