#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Global constants for array dimensions
const int ROWS = 4;
const int COLS = 5;

// Function prototypes
void init(int arr[][COLS], int rows);
void print(int arr[][COLS], int rows);

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Declare a 4x5 two-dimensional integer array
    int myArray[ROWS][COLS];

    // Call the init function to populate the array
    init(myArray, ROWS);

    // Call the print function to display the array
    print(myArray, ROWS);

    return 0;
}

// Function to initialize the array with random digits (0-9)
void init(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = rand() % 10; 
        }
    }
}

// Function to print the contents of the array
void print(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to the next line after each row
    }
}