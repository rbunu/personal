#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> 

using namespace std;

int main() {
    int arr[15];
    
    
    srand(time(0));

    cout << "Array elements: ";
    
    for (int i = 0; i < 15; i++) {
        arr[i] = rand() % 99 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    
    int large = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;


for (int i = 0; i < 15; i++) {
        
        if (arr[i] > large) {
            third = second;      
            second = large;      
            large = arr[i];      
        } 
        
        else if (arr[i] > second) {
            third = second;     
            second = arr[i];    
        } 
        
        else if (arr[i] > third) {
            third = arr[i];     
        }
    }

    
    cout << "Largest: " << large << endl;
    cout << "Second Largest: " << second << endl;
    cout << "Third Largest: " << third << endl;

    return 0;
}