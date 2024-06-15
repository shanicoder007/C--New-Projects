#include <iostream>
using namespace std;

int main()
{
    int r = 0;
    int c = 0;
    int b = 0;
    int u_input;
    int count = 0, amount = 0;
    // Menu for car parking
    // we add while loop for conti.... the programe
    while (true)
    {
        cout << "************************************************  " << endl;
        cout << " Please select your Vehicle type " << endl;
        cout << "Rent for Rikshaw is =  '100' " << endl;
        cout << "Rent for Car is     =  '200' " << endl;
        cout << "Rent for Bus is.     =  '300' " << endl;

        cout << "************************************************  " << endl;

        cout << "Press 1 For Rikshaw " << endl;
        cout << "Press 2 For Cars " << endl;
        cout << "Press 3 For Buses " << endl;
        cout << "Press 4 to show the Record " << endl;
        cout << "Press 5 to delete the record " << endl;
        cout << "************************************************  " << endl;
        cout << "************************************************  " << endl
             << endl;
        cin >> u_input;

        // Now we're giving conditions according to my project
        if (u_input == 1)
        {
            if (count <= 50)
            {
                r++;
                amount = amount + 100;
                count = count + 1;
            }
            else
                cout << " parking is full " << endl;
        }
        else if (u_input == 2)
        {
            if (count <= 50)
            {
                c++;
                amount = amount + 200;
                count = count + 1;
            }
            else
                cout << " parking is full " << endl;
        }
        else if (u_input == 3)
        {
            if (count <= 50)
            {
                b++;
                amount = amount + 300;
                count = count + 1;
            }
            else
                cout << "Car parking is full " << endl;
        }
        else if (u_input == 4)
        {
            cout << "The total Amount of Vehicles = " << amount << endl;
            cout << "The total numbers of vehicles in the parking = " << count << endl;
            cout << "The total no of Rikshaws = " << r << endl;
            cout << "The total no of Cars = " << c << endl;
            cout << "The total no buses = " << b << endl;
            cout << "************************************************  " << endl;
            cout << "************************************************  " << endl
                 << endl;
        }
        else if (u_input == 5)
        {
            amount = 0;
            count = 0;
            r = 0;
            c = 0;
            b = 0;
        }
        else
        {
            cout << "Invalid input " << endl;
        }
    }
    return 0;
}