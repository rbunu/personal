#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int num;

            if (i == 0)
                num = rand() % 10 + 1; 
            else if (i == 1)
                num = rand() % 10 + 101; 
            else
                num = rand() % 10 + 201;

            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}