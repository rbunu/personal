#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SIZE = 6;
    string names[SIZE];
    int currentCount = 0; 

    // Loop to read 6 names
    for (int i = 0; i < SIZE; i++) {
        string inputName;
        cout << "Enter the name to add > ";
        cin >> inputName;

        
        int insertIndex = currentCount; 
        for (int j = 0; j < currentCount; j++) {
            if (inputName < names[j]) {
                insertIndex = j;
                break;
            }
        }

        
        for (int j = currentCount; j > insertIndex; j--) {
            names[j] = names[j - 1];
        }

        
        names[insertIndex] = inputName;
        currentCount++;
    }

    // Print the final sorted array
    cout << "\nSorted Order";
    for (int i = 0; i < SIZE; i++) {
        cout << " " << names[i];
    }
    cout << endl;

    return 0;
}