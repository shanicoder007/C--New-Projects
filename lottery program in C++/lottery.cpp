#include <iostream>
#include <stdlib.h>
using namespace std;

// Lottery Program

int main()
{
    int num;
    int temp;
    int select_people[56];

    // Filling the array with random numbers
    for (int i = 0; i < 56; i++)
    {
        num = rand() % 100;
        select_people[i] = num; // Store the random number in the array
    }

    // Checking for duplicates and reassigning if found
    for (int j = 0; j < 56; j++)
    {
        for (int k = 0; k < j; k++)
        {
            if (select_people[j] == select_people[k])
            {
                j = -1; // Restart the outer loop to recheck all entries
                num = rand() % 100;
                select_people[j + 1] = num;
                break;
            }
        }
    }

    // Sorting the array
    for (int j = 0; j < 56; j++)
    {
        for (int k = 0; k < 56 - 1; k++)
        {
            if (select_people[k] > select_people[k + 1])
            {
                temp = select_people[k];
                select_people[k] = select_people[k + 1];
                select_people[k + 1] = temp;
            }
        }
    }

    // Printing the array
    for (int i = 0; i < 56; i++)
        cout << select_people[i] << endl;

    return 0;
}
