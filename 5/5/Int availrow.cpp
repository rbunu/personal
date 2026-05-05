#include <iostream>
#include <vector>

const int ROWS = 6;
const int COLS = 7;

// Function to initialize the available row tracker
void initAvailRow(std::vector<int>& availRow) {
    // Loop through every column and set the starting row to the bottom
    for (int j = 0; j < COLS; ++j) {
        availRow[j] = ROWS - 1; 
    }
}

int main() {
    // Create the AvailRow vector with a capacity equal to the number of columns
    std::vector<int> availRow(COLS);
    
    // Call the initialization function
    initAvailRow(availRow);
    
    // Print the results to verify
    for (int j = 0; j < COLS; ++j) {
        std::cout << "Column " << j << " next available row: " << availRow[j] << "\n";
    }
    
    return 0;
}