#include <iostream>
using namespace std;

void checkDigits(int num)
{
    if (num == 0)
        return;

    int digit = num % 10;

    checkDigits(num / 10); 

    if (digit % 2 == 0)
        cout << "The digit " << digit << " is an even number." << endl;
    else
        cout << "The digit " << digit << " is an odd number." << endl;
}

int main()
{
    int num;
    cout << "Enter a number > 10000 and < 99999: ";
    cin >> num;

    checkDigits(num);

    return 0;
}